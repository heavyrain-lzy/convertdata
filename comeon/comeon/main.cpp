#include "comeon.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	comeon w;
	w.show();
	return a.exec();
}
