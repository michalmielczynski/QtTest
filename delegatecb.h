#ifndef DELEGATECB_H
#define DELEGATECB_H

#include <QItemDelegate>
#include <QCheckBox>

class DelegateCB : public QItemDelegate
{
    Q_OBJECT
public:
    explicit DelegateCB(QObject *parent = 0);

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    void paint( QPainter *painter, const QStyleOptionViewItem &option,
					const QModelIndex &index ) const;



private:
    QCheckBox *checkBox;

signals:

public slots:

};

#endif // DELEGATECB_H
