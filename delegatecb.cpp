#include "delegatecb.h"
#include <QtGui>
DelegateCB::DelegateCB(QObject *parent) :
    QItemDelegate(parent)
{

}

QWidget *DelegateCB::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const{

QCheckBox *checkBoxDelegate = new QCheckBox(parent);
checkBoxDelegate->setChecked(false);
return checkBoxDelegate;


}
void DelegateCB::setEditorData(QWidget *editor, const QModelIndex &index) const{

    QCheckBox *checkBoxDelegate = static_cast<QCheckBox*>(editor);
    bool checked = index.model()->data(index,Qt::EditRole).toBool();

    checkBoxDelegate->setChecked(checked);
}
void DelegateCB::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const{
    QCheckBox *checkBoxDelegate = static_cast<QCheckBox*>(editor);
    bool checked = checkBoxDelegate->isChecked();
    model->setData(index,checked,Qt::EditRole);

}
void DelegateCB::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const{

    editor->setGeometry(option.rect);
}

void DelegateCB::paint( QPainter *painter, const QStyleOptionViewItem &option,/// @todo
				    const QModelIndex &index ) const
{
    QStyleOptionTitleBar bar;
    if(index.model()->data(index,Qt::DisplayRole).toBool()){
	bar.text="*";
    }
    else
    bar.text="";
    QApplication::style()->drawControl( QStyle::CE_HeaderLabel,&bar, painter, 0 );
}
