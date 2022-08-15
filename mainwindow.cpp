#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    op = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addb_clicked()
{
    calc();
    op = 1;
}

void MainWindow::on_subtractb_clicked()
{
    calc();
    op = 2;
}

void MainWindow::on_multiplyb_clicked()
{
    calc();
    op = 3;
}

void MainWindow::on_divideb_clicked()
{
    calc();
    op = 4;
}

void MainWindow::on_equalsb_clicked()
{
    calc();
    op = 0;
}

void MainWindow::on_clearb_clicked()
{
    ui->lineEdit->clear();
    ui->label->clear();
    storedVal = 0;
    op = 0;
}

void MainWindow::calc()
{
    switch(op) {
        case 0:
            storedVal = ui->lineEdit->text().toDouble();
            break;
        case 1:
            storedVal += ui->lineEdit->text().toDouble();
            break;
        case 2:
            storedVal -= ui->lineEdit->text().toDouble();
            break;
        case 3:
            storedVal *= ui->lineEdit->text().toDouble();
            break;
        case 4:
            storedVal /= ui->lineEdit->text().toDouble();
            break;
    }
    display();
}

void MainWindow::display()
{
    ui->label->setText(QString::number(storedVal));
    ui->lineEdit->clear();
}
