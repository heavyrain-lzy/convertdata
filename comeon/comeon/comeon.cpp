#include "comeon.h"

comeon::comeon(QWidget *parent)
	: QMainWindow(parent)
	, m_size(0)
{
	ui.setupUi(this);
}

comeon::~comeon()
{

}

void comeon::slot_convert()
{
	QStringList list;
	list = openFile();
	convert(list);
	QString data = list.join(" ");
	QString data1 = data.mid(data.indexOf("00 01 02 03 04"));
	QStringList mid = data1.split("00 01 02 03 04 ");//修改帧头的话这个也要修改
	mid.pop_front();
	writeToTxt(mid);
}
QStringList comeon::openFile()
{
	m_filePath = QFileDialog::getOpenFileName(this, "Open the File", qApp->applicationDirPath(), "Txt(*.txt)");
	m_fileName = m_filePath.mid(m_filePath.lastIndexOf("/") + 1);
	QFile txt(m_filePath);
	bool bOpen = txt.open(QIODevice::ReadOnly | QIODevice::Text);
	QString data(txt.readAll());
	txt.close();
	return data.split(" ");
}
void comeon::convert(QStringList& list)
{
	QStringList a = list;
	list.clear();
	foreach(QString str, a)
	{
		if (str.size()>2)
		{
			for (int i = 2; i < str.size(); i += 3)
			{
				str.insert(i, " ");
			}
			QStringList midList(str.split(" "));
			foreach(QString data, midList)
			{
				list.push_back(data);
			}
		}
		else
			list.push_back(str);
	}
}
void comeon::writeToTxt(QStringList& data)
{
	m_filePath = m_filePath.mid(0, m_filePath.lastIndexOf("/") + 1) + "result_" + m_fileName;
	QFile txt(m_filePath);
	txt.open(QIODevice::WriteOnly | QIODevice::Text);
	QTextStream writetxt(&txt);
	int total = 0;
	int row = data.size() - 1;
	while (row >= 0 && total<7200)//这里修改需要的数据总数,360/30*400*3=3600*3
	{
		QStringList strList1 = data[row].split(" ");
		if (strList1[strList1.size() - 1] == "")
		{
			strList1.pop_back();
		}
		if (strList1.size() == 12)
		{
			QStringList strList2;
			for (int i = 0; i<12; i = i + 4)
			{
				int value = 0x00000000;
				for (int j = 0; j<3; j++)
				{
					int a = strList1[i + j].toInt(0, 16);
					value = (value | a) << 8;
				}
				value = value | strList1[i + 3].toInt(0, 16);
				strList2.push_back(QString::number(value));
			}
			QString str3 = strList2.join("\t") + "\r\n";
			writetxt << str3;
			total++;
		}
		row--;
	}
	txt.close();
}