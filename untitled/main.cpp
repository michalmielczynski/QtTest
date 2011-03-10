#include <QtCore/QCoreApplication>
#include <QRegExp>
#include <QString>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString str="Ericsson";

    QRegExp reg("\b(Eric|Eirik)\b");
    qDebug()<<reg.lastIndexIn(str);


    return a.exec();
}
