#ifndef LAB10_PNR_H
#define LAB10_PNR_H

#include <QMainWindow>
#include "number_pnr.h"
#include "fraction_pnr.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Lab10_PNR; }
QT_END_NAMESPACE

class Lab10_PNR : public QMainWindow
{
    Q_OBJECT

public:
    Lab10_PNR(QWidget *parent = nullptr);
    ~Lab10_PNR();

    void getNumbers();
private slots:
    void on_btnAdd_PNR_clicked();

    void on_btnSub_PNR_clicked();

    void on_btnMult_PNR_clicked();

    void on_btnDiv_PNR_clicked();

private:
    Ui::Lab10_PNR *ui;

    Number_PNR<Fraction_PNR>num1;
    Number_PNR<Fraction_PNR>num2;
};
#endif // LAB10_PNR_H
