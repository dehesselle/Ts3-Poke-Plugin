#ifndef BASICDIALOG_H
#define BASICDIALOG_H

#include <QDialog>

namespace Ui {
class BasicDialog;
}

class BasicDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BasicDialog(QWidget *parent = 0);
    ~BasicDialog();

private:
    Ui::BasicDialog *ui;
};

#endif // BASICDIALOG_H
