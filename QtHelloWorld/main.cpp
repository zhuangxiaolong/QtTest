#include <QtGui/QApplication>
#include "QtHelloWorld.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtHelloWorld helloWorld;
	helloWorld.showDialog();

	return a.exec();
}