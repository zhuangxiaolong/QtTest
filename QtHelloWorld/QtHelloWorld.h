#ifndef QTHELLOWORLD_H
#define QTHELLOWORLD_H

#include <QtUiTools/QtUiTools>
#include <QFile>
#include <QpushButton>
#include <qtextedit>
#include <QLabel>

class QtHelloWorld:public QWidget
{
	Q_OBJECT  //这个相当重要，只有加入了Q_OBJECT，你才能使用QT中的signal和slot机制。

public:
	 QtHelloWorld(QWidget *parent=0,Qt::WindowFlags name=0);
	 int showDialog();
private slots:
	 void btnTest_clicked();
};

#endif