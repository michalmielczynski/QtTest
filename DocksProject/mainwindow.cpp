#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dock = new DockWidget(this);
    dock->show();

    dock2 = new DockWidget(this);
    dock2->show();


}

MainWindow::~MainWindow()
{
    delete ui;
}
