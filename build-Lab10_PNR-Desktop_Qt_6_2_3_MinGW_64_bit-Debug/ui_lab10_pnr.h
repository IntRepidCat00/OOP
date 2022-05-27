/********************************************************************************
** Form generated from reading UI file 'lab10_pnr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB10_PNR_H
#define UI_LAB10_PNR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab10_PNR
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit1_PNR;
    QLabel *lblNumerator_PNR;
    QLabel *lblDenominator_PNR;
    QLineEdit *lineEditNum1_PNR;
    QLineEdit *lineEditNum2_PNR;
    QLabel *lbl1_1_PNR;
    QLabel *lbl1_2_PNR;
    QLineEdit *lineEditDenom1_PNR;
    QLabel *lbl2_2_PNR;
    QLabel *lbl2_1_PNR;
    QLineEdit *lineEditDenom2_PNR;
    QPushButton *btnAdd_PNR;
    QPushButton *btnSub_PNR;
    QPushButton *btnMult_PNR;
    QPushButton *btnDiv_PNR;
    QLabel *lblMsg_PNR;
    QLabel *lblMsgVal_PNR;

    void setupUi(QMainWindow *Lab10_PNR)
    {
        if (Lab10_PNR->objectName().isEmpty())
            Lab10_PNR->setObjectName(QString::fromUtf8("Lab10_PNR"));
        Lab10_PNR->resize(476, 439);
        centralwidget = new QWidget(Lab10_PNR);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit1_PNR = new QTextEdit(centralwidget);
        textEdit1_PNR->setObjectName(QString::fromUtf8("textEdit1_PNR"));
        textEdit1_PNR->setGeometry(QRect(10, 20, 451, 151));
        QFont font;
        font.setPointSize(12);
        textEdit1_PNR->setFont(font);
        lblNumerator_PNR = new QLabel(centralwidget);
        lblNumerator_PNR->setObjectName(QString::fromUtf8("lblNumerator_PNR"));
        lblNumerator_PNR->setGeometry(QRect(20, 190, 441, 20));
        lblDenominator_PNR = new QLabel(centralwidget);
        lblDenominator_PNR->setObjectName(QString::fromUtf8("lblDenominator_PNR"));
        lblDenominator_PNR->setGeometry(QRect(20, 260, 441, 20));
        lineEditNum1_PNR = new QLineEdit(centralwidget);
        lineEditNum1_PNR->setObjectName(QString::fromUtf8("lineEditNum1_PNR"));
        lineEditNum1_PNR->setGeometry(QRect(40, 220, 191, 28));
        lineEditNum2_PNR = new QLineEdit(centralwidget);
        lineEditNum2_PNR->setObjectName(QString::fromUtf8("lineEditNum2_PNR"));
        lineEditNum2_PNR->setGeometry(QRect(260, 220, 191, 28));
        lbl1_1_PNR = new QLabel(centralwidget);
        lbl1_1_PNR->setObjectName(QString::fromUtf8("lbl1_1_PNR"));
        lbl1_1_PNR->setGeometry(QRect(20, 220, 21, 20));
        lbl1_2_PNR = new QLabel(centralwidget);
        lbl1_2_PNR->setObjectName(QString::fromUtf8("lbl1_2_PNR"));
        lbl1_2_PNR->setGeometry(QRect(20, 290, 21, 20));
        lineEditDenom1_PNR = new QLineEdit(centralwidget);
        lineEditDenom1_PNR->setObjectName(QString::fromUtf8("lineEditDenom1_PNR"));
        lineEditDenom1_PNR->setGeometry(QRect(40, 290, 191, 28));
        lbl2_2_PNR = new QLabel(centralwidget);
        lbl2_2_PNR->setObjectName(QString::fromUtf8("lbl2_2_PNR"));
        lbl2_2_PNR->setGeometry(QRect(240, 290, 21, 20));
        lbl2_1_PNR = new QLabel(centralwidget);
        lbl2_1_PNR->setObjectName(QString::fromUtf8("lbl2_1_PNR"));
        lbl2_1_PNR->setGeometry(QRect(240, 220, 21, 20));
        lineEditDenom2_PNR = new QLineEdit(centralwidget);
        lineEditDenom2_PNR->setObjectName(QString::fromUtf8("lineEditDenom2_PNR"));
        lineEditDenom2_PNR->setGeometry(QRect(260, 290, 191, 28));
        btnAdd_PNR = new QPushButton(centralwidget);
        btnAdd_PNR->setObjectName(QString::fromUtf8("btnAdd_PNR"));
        btnAdd_PNR->setGeometry(QRect(20, 330, 101, 41));
        btnSub_PNR = new QPushButton(centralwidget);
        btnSub_PNR->setObjectName(QString::fromUtf8("btnSub_PNR"));
        btnSub_PNR->setGeometry(QRect(130, 330, 101, 41));
        btnMult_PNR = new QPushButton(centralwidget);
        btnMult_PNR->setObjectName(QString::fromUtf8("btnMult_PNR"));
        btnMult_PNR->setGeometry(QRect(240, 330, 101, 41));
        btnDiv_PNR = new QPushButton(centralwidget);
        btnDiv_PNR->setObjectName(QString::fromUtf8("btnDiv_PNR"));
        btnDiv_PNR->setGeometry(QRect(350, 330, 101, 41));
        lblMsg_PNR = new QLabel(centralwidget);
        lblMsg_PNR->setObjectName(QString::fromUtf8("lblMsg_PNR"));
        lblMsg_PNR->setGeometry(QRect(20, 380, 441, 20));
        lblMsgVal_PNR = new QLabel(centralwidget);
        lblMsgVal_PNR->setObjectName(QString::fromUtf8("lblMsgVal_PNR"));
        lblMsgVal_PNR->setGeometry(QRect(20, 410, 441, 20));
        Lab10_PNR->setCentralWidget(centralwidget);

        retranslateUi(Lab10_PNR);

        QMetaObject::connectSlotsByName(Lab10_PNR);
    } // setupUi

    void retranslateUi(QMainWindow *Lab10_PNR)
    {
        Lab10_PNR->setWindowTitle(QCoreApplication::translate("Lab10_PNR", "Lab10_PNR", nullptr));
        lblNumerator_PNR->setText(QCoreApplication::translate("Lab10_PNR", "Numerator:", nullptr));
        lblDenominator_PNR->setText(QCoreApplication::translate("Lab10_PNR", "Denominator:", nullptr));
        lbl1_1_PNR->setText(QCoreApplication::translate("Lab10_PNR", "1:", nullptr));
        lbl1_2_PNR->setText(QCoreApplication::translate("Lab10_PNR", "1:", nullptr));
        lbl2_2_PNR->setText(QCoreApplication::translate("Lab10_PNR", "2:", nullptr));
        lbl2_1_PNR->setText(QCoreApplication::translate("Lab10_PNR", "2:", nullptr));
        btnAdd_PNR->setText(QCoreApplication::translate("Lab10_PNR", "Add", nullptr));
        btnSub_PNR->setText(QCoreApplication::translate("Lab10_PNR", "Subtract", nullptr));
        btnMult_PNR->setText(QCoreApplication::translate("Lab10_PNR", "Multiply", nullptr));
        btnDiv_PNR->setText(QCoreApplication::translate("Lab10_PNR", "Divide", nullptr));
        lblMsg_PNR->setText(QCoreApplication::translate("Lab10_PNR", "Message:", nullptr));
        lblMsgVal_PNR->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Lab10_PNR: public Ui_Lab10_PNR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB10_PNR_H
