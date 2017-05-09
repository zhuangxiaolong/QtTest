#include "QtHelloWorld.h"

QWidget *wHelloWorld;
QtHelloWorld::QtHelloWorld(QWidget *parent,Qt::WindowFlags name)
:QWidget(parent,name)
{

}
int QtHelloWorld::showDialog()
{
	QUiLoader  uiLoader;
	QFile file("QtHelloWorld.ui");
	QWidget *widget=uiLoader.load(&file);
	if (widget)
	{
		QPushButton *btnTest=widget->findChild<QPushButton *>("btnTest");
		if (btnTest)
		{
			QObject::connect(btnTest,SIGNAL(clicked()),this,SLOT(btnTest_clicked()));
		}
		widget->show();
		wHelloWorld=widget;
		return 0;
	}
	return 1;
}
void QtHelloWorld::btnTest_clicked()
{
	QTextEdit *edit=wHelloWorld->findChild<QTextEdit *>("txtInput");
	QLabel *lbl=wHelloWorld->findChild<QLabel *>("lblShow");
	if (edit)
	{
		QString s=edit->toPlainText();
		if (lbl)
			lbl->setText(s);
	}
}