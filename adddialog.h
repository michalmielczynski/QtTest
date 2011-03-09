#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QString>

//komentarz
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
private:
    Ui::AddDialog *ui;

};

#endif // ADDDIALOG_H
