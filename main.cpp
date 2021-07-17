#include "mainwindow.h"

#include <QApplication>
#include "server.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    server* myServer = new server();
    myServer->startServer();
    MainWindow w1;
    w1.show();
    MainWindow w2;
    w2.show();
    return a.exec();
}
