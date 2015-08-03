#ifndef JAVASOCKETCONNECT_H
#define JAVASOCKETCONNECT_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDebug>

class JavaSocketConnect : public QObject
{
    Q_OBJECT
public:
    explicit JavaSocketConnect(QObject *parent = 0);
    void connectToJava();

signals:

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();

private:
    QTcpSocket *socket;
};

#endif // JAVASOCKETCONNECT_H
