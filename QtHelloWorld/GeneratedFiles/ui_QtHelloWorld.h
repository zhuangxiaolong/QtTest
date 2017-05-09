/********************************************************************************
** Form generated from reading UI file 'QtHelloWorld.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTHELLOWORLD_H
#define UI_QTHELLOWORLD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmMain
{
public:
    QPushButton *btnTest;
    QLabel *lblShow;
    QTextEdit *txtInput;

    void setupUi(QWidget *FrmMain)
    {
        if (FrmMain->objectName().isEmpty())
            FrmMain->setObjectName(QString::fromUtf8("FrmMain"));
        FrmMain->resize(400, 300);
        btnTest = new QPushButton(FrmMain);
        btnTest->setObjectName(QString::fromUtf8("btnTest"));
        btnTest->setGeometry(QRect(190, 190, 75, 23));
        lblShow = new QLabel(FrmMain);
        lblShow->setObjectName(QString::fromUtf8("lblShow"));
        lblShow->setGeometry(QRect(60, 110, 54, 12));
        txtInput = new QTextEdit(FrmMain);
        txtInput->setObjectName(QString::fromUtf8("txtInput"));
        txtInput->setGeometry(QRect(150, 80, 171, 71));

        retranslateUi(FrmMain);

        QMetaObject::connectSlotsByName(FrmMain);
    } // setupUi

    void retranslateUi(QWidget *FrmMain)
    {
        FrmMain->setWindowTitle(QApplication::translate("FrmMain", "Form", 0, QApplication::UnicodeUTF8));
        btnTest->setText(QApplication::translate("FrmMain", "PushButton", 0, QApplication::UnicodeUTF8));
        lblShow->setText(QApplication::translate("FrmMain", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmMain: public Ui_FrmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTHELLOWORLD_H
