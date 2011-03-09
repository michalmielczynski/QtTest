#include "tablewidget.h"
#include <QtGui>

TableWidget::TableWidget(QWidget *parent): QWidget(parent)
{


    table = new QTableView;
    query = new QLineEdit;
    label = new QLabel("find");

    model = new QStandardItemModel(this);
    model->setHorizontalHeaderLabels(QStringList()<<"name"<<"address");

    QHBoxLayout *horizontalLayout = new QHBoxLayout;
    horizontalLayout->addWidget(label);
    horizontalLayout->addWidget(query);

    QVBoxLayout *a = new QVBoxLayout;
    a->addLayout(horizontalLayout);
    a->addWidget(table);
    setLayout(a);

    table->setModel(model);
    connect(query,SIGNAL(textChanged(QString)),this,SLOT(showLike(QString)));

}

void TableWidget::insert(const QStringList &list){
    QString name = list.at(0);
    QString address = list.at(1);
    QList<QStandardItem*> items;
    items.append(new QStandardItem(name));
    items.append(new QStandardItem(address));
    model->appendRow(items);
    contacts.insert(name,address);
}

void TableWidget::deleteRecord(int index){
//todo
}

QString TableWidget::getSringRecord(int index){
    QMap<QString,QString>::iterator i=contacts.begin();
    i+index;
    QString ret;
    ret=i.key();
    ret+=i.value();
    return ret;
}

int TableWidget::getContactCount(){
//to do
}

QMap<QString,QString> TableWidget::getContacts(){

    return contacts;
}

void TableWidget::clearContacts(){
    contacts.empty();
}

void TableWidget::insertAllContacts(QMap<QString,QString> map){

    contacts.clear();
    model->clear();
    qDebug()<<"INSERT MAP"<<map;
    contacts = map;

    QMap<QString,QString>::iterator i=contacts.begin();

    if(!contacts.empty()){
	while(i!=contacts.end()){
	   QList<QStandardItem*> items;
	    items.append(new QStandardItem(i.key()));
	    items.append(new QStandardItem(i.value()));
	   model->appendRow(items);
	   i++;
	}
    }

}

void TableWidget::showLike(QString findText){///@todo
    model->clear();
    QList<QStandardItem*> items;
    QString exp = "^[";
    exp+=findText;
    exp+="]*";
    QRegExp reg(exp);

    qDebug()<<exp;

    QMap<QString,QString>::iterator i = contacts.begin();
    while(i!=contacts.end()){
         qDebug()<<reg.indexIn(i.key());
         qDebug()<<i.key();
         i++;
    }

     model->appendRow(items);
}
