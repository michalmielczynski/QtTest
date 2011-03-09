#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tablewidget.h"
#include "adddialog.h"


class QPlainTextEdit;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);



private slots:
    void save();
    void open();
    void importContacts();

    void addContact();
    void editContact();


private:
    QPlainTextEdit *textEdit;

     QMenu *addressBookMenu;
     QMenu *contactMenu;
     QAction *saveAct;
     QAction *openAct;
     QAction *importAct;
     QAction *addContactAct;
     QAction *editContactAct;
     QAction *deleteContactAct;

     TableWidget *table;
     AddDialog *addDialog;

};

#endif // MAINWINDOW_H
