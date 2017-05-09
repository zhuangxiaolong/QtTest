#include "MyWidget.h"



MyWidget::MyWidget(QWidget *parent,Qt::WindowFlags name)
:QWidget(parent,name)
{
	setMinimumSize(200,120);

	QPushButton *quit=new QPushButton("Quit",this);
	quit->setGeometry(62,40,75,30);
	quit->setFont(QFont("Times",18,QFont::Bold));

	connect(quit,SIGNAL(clicked()),qApp,SLOT(quit()));
}