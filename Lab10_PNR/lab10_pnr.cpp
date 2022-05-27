#include "lab10_pnr.h"
#include "ui_lab10_pnr.h"

Lab10_PNR::Lab10_PNR(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lab10_PNR)
{
    ui->setupUi(this);
}

Lab10_PNR::~Lab10_PNR()
{
    delete ui;
}

void Lab10_PNR::getNumbers()
{
    ui->lblMsgVal_PNR->setText("");
    int numer1, numer2, denom1, denom2;

    numer1 = ui->lineEditNum1_PNR->text().toInt();
    numer2 = ui->lineEditNum2_PNR->text().toInt();
    denom1 = ui->lineEditDenom1_PNR->text().toInt();
    denom2 = ui->lineEditDenom2_PNR->text().toInt();

    if(denom1 == 0 || denom2 == 0)
    {
        ui->lblMsgVal_PNR->setText("Wrong values of numbers");
        return;
    }

    num1.setValue(Fraction_PNR(numer1, denom1));
    num2.setValue(Fraction_PNR(numer2, denom2));
}

void Lab10_PNR::on_btnAdd_PNR_clicked()
{
    getNumbers();

    (num1 + num2).printOnScreen(ui->textEdit1_PNR);
}


void Lab10_PNR::on_btnSub_PNR_clicked()
{
    getNumbers();

    (num1 - num2).printOnScreen(ui->textEdit1_PNR);
}


void Lab10_PNR::on_btnMult_PNR_clicked()
{
    getNumbers();

    (num1 * num2).printOnScreen(ui->textEdit1_PNR);
}


void Lab10_PNR::on_btnDiv_PNR_clicked()
{
    getNumbers();

    (num1 / num2).printOnScreen(ui->textEdit1_PNR);
}

