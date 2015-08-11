#include <QApplication>
#include <QVBoxLayout>
#include <QPushButton>
#include "javasocketconnect.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    JavaSocketConnect jscok;

   // jscok.connectToJava();

    QVBoxLayout *mainLayout = new QVBoxLayout;
    QPushButton *bConnect = new QPushButton("Connect");
    mainLayout->addWidget(bConnect);

    QWidget *w = new QWidget();
    w->setLayout(mainLayout);
    w->show();

    return a.exec();
}
