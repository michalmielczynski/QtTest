#include <QtGui/QApplication>
#include "mainwindow.h"
#include "tablewidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();
    w.show();
    return a.exec();
}
