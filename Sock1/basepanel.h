#ifndef BASEPANEL_H
#define BASEPANEL_H

#include <QMainWindow>

class BasePanel : public QMainWindow
{
    Q_OBJECT
public:
    explicit BasePanel(QWidget *parent = 0);

signals:

public slots:
};

#endif // BASEPANEL_H
