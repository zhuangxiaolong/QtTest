#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <qapplication.h>
#include <qpushbutton.h>
#include <qfont.h>

class MyWidget:public QWidget
{
public:
	MyWidget(QWidget *parent=0,Qt::WindowFlags name=0);
};

#endif
