#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "javasocketconnect.h"



MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),  ui(new Ui::MainWindow)
{

    jscok = new JavaSocketConnect;
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickedSlot()
{

    jscok->connectToJava();
}
