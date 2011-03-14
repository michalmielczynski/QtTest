#include "dockwidget.h"
#include "ui_dockwidget.h"
#include <QtGui>

DockWidget::DockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::DockWidget)
{
    ui->setupUi(this);

    QPalette a;

    a.setColor(QPalette::Window,QColor(100,100,10,255));

    this->setMinimumSize(300,500);
    this->setMaximumSize(300,500);

    this->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    this->setPalette(a);
}

DockWidget::~DockWidget()
{
    delete ui;
}
