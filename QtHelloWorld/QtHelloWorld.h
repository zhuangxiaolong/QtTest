#ifndef QTHELLOWORLD_H
#define QTHELLOWORLD_H

#include <QtUiTools/QtUiTools>
#include <QFile>
#include <QpushButton>
#include <qtextedit>
#include <QLabel>

class QtHelloWorld:public QWidget
{
	Q_OBJECT  //����൱��Ҫ��ֻ�м�����Q_OBJECT�������ʹ��QT�е�signal��slot���ơ�

public:
	 QtHelloWorld(QWidget *parent=0,Qt::WindowFlags name=0);
	 int showDialog();
private slots:
	 void btnTest_clicked();
};

#endif