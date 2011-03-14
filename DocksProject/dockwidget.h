#ifndef DOCKWIDGET_H
#define DOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
    class DockWidget;
}

class DockWidget : public QDockWidget
{
    Q_OBJECT

public:
    explicit DockWidget(QWidget *parent = 0);
    ~DockWidget();

private:
    Ui::DockWidget *ui;
};

#endif // DOCKWIDGET_H
