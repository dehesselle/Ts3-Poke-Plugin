#include "basicdialog.h"
#include "ui_basicdialog.h"

BasicDialog::BasicDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BasicDialog)
{
    ui->setupUi(this);
}

BasicDialog::~BasicDialog()
{
    delete ui;
}
