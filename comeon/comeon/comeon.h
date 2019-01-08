#ifndef COMEON_H
#define COMEON_H


#include <QtWidgets/QMainWindow>
#include <QstringList>
#include <QFileDialog>
#include <QTextStream>
#include "ui_comeon.h"

class comeon : public QMainWindow
{
	Q_OBJECT

public:
	comeon(QWidget *parent = 0);
	~comeon();

private:
	Ui::comeonClass ui;
	QString m_FH;
	int m_size;
	QString m_fileName;
	QString m_filePath;
public slots:
	void slot_convert();
public:
	QStringList openFile();
	void convert(QStringList& list);
	void writeToTxt(QStringList& data);
};

#endif // COMEON_H
