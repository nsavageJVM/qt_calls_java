#include <QCoreApplication>
#include "javasocketconnect.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    JavaSocketConnect jscok;

    jscok.connectToJava();

    return a.exec();
}
