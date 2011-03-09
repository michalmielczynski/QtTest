#ifndef TABLEWIDGET_H
#define TABLEWIDGET_H

#include <QtGui>


/**
  Class inherites from QWidget
  **/
class TableWidget : public QWidget
{
    Q_OBJECT
public:
    TableWidget(QWidget *parent=0);

signals:

public slots:
    void insert(const QStringList &list);
    void deleteRecord(int index);
    QString getSringRecord(int index);
    int getContactCount();
    QMap<QString,QString> getContacts();
    void clearContacts();
    void insertAllContacts(QMap<QString,QString> map);
    void showLike(QString findText);

private:
    QMap<QString,QString> contacts;
    QTableView *table;
    QLineEdit *query;
    QLabel *label;
    QStandardItemModel *model;



};

#endif // TABLEWIDGET_H
