#include "adddialog.h"
#include "ui_adddialog.h"
#include <QtGui>

AddDialog::AddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDialog)
{
    ui->setupUi(this);

}

AddDialog::~AddDialog()
{
    delete ui;
}

QString AddDialog::labelData(){
    return ui->lineEdit->text();
}

QString AddDialog::plainTextData(){
    return ui->plainTextEdit->toPlainText();
}


