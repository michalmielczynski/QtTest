#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QString>


namespace Ui {
    class AddDialog;
}

class AddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDialog(QWidget *parent = 0);
    ~AddDialog();

    QString labelData();
    QString plainTextData();
private slots:


private:
    Ui::AddDialog *ui;

};

#endif // ADDDIALOG_H
