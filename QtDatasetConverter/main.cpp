#include "QtDatasetConverter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtDatasetConverter w;
	w.show();
	return a.exec();
}
