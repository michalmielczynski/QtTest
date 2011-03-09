#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    table = new TableWidget;
    setCentralWidget(table);
    // address book actions
    saveAct = new QAction("save",this);
    connect(saveAct,SIGNAL(triggered()),this,SLOT(save()));

    openAct = new QAction("open",this);
    connect(openAct,SIGNAL(triggered()),this,SLOT(open()));

    importAct = new QAction("Import",this);
    connect(importAct,SIGNAL(triggered()),this,SLOT(importContacts()));

    // conntact actions
    addContactAct = new QAction("Add Contact",this);
    connect(addContactAct,SIGNAL(triggered()),this,SLOT(addContact()));

    editContactAct = new QAction("Edit Contact",this);
    connect(editContactAct,SIGNAL(triggered()),this,SLOT(editContact()));

    deleteContactAct = new QAction("DeleteContact",this);
    connect(deleteContactAct,SIGNAL(triggered()),this,SLOT(editContact()));

    //menus
    addressBookMenu = menuBar()->addMenu(tr("&Address Book"));
    addressBookMenu->addAction(saveAct);
    addressBookMenu->addAction(openAct);
    addressBookMenu->addAction(importAct);

    contactMenu = menuBar()->addMenu(tr("&Conntact"));
    contactMenu->addAction(addContactAct);
    contactMenu->addAction(editContactAct);
    contactMenu->addAction(deleteContactAct);
}

void MainWindow::save(){
    QString fileName = QFileDialog::getSaveFileName(this);
    QFile file(fileName);
    QDataStream out(&file);

    file.open(QFile::WriteOnly | QFile::Text);

    out<<table->getContacts();
    qDebug()<<table->getContacts();


}
void MainWindow::open(){
    QString fileName = QFileDialog::getOpenFileName(this);
    QFile file(fileName);
    QDataStream in(&file);

    if (file.open(QFile::ReadOnly | QFile::Text)){
	QMap<QString,QString> helper;
	in >> helper;
	qDebug()<<helper;
	table->insertAllContacts(helper);
    }
    else{
	QMessageBox::warning(this,"Warning","Nie za³adowano pliku!");
    }

}

void MainWindow::importContacts(){
    QString fileName = QFileDialog::getOpenFileName(this);
    QFile file(fileName);
    QTextStream in(&file);

    if (file.open(QFile::ReadOnly | QFile::Text)){
	QString fileLine;
	qDebug()<<fileName;
	do{
	    fileLine = in.readLine(0);
	    if((fileLine.contains(";")) && (fileLine.count()>1) ){
		QStringList address;
		address<<fileLine.section(';',0,0)<<fileLine.section(';',1,1);
		table->insert(address);
	    }
	}while(fileLine!=NULL);
    }
    else{
	QMessageBox::warning(this,"Warning","Nie za³adowano pliku!");
    }
}

void MainWindow::addContact(){
    addDialog = new AddDialog;
//    addDialog->show();
    addDialog->exec();
    QString test = addDialog->labelData();
    qDebug() << test;

} ///@todo
void MainWindow::editContact(){}///@todo
