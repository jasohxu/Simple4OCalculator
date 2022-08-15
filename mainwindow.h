#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addb_clicked();

    void on_subtractb_clicked();

    void on_multiplyb_clicked();

    void on_divideb_clicked();

    void on_equalsb_clicked();

    void on_clearb_clicked();

private:
    Ui::MainWindow *ui;
    void calc();
    float storedVal;
    int op;
    void display();
};
#endif // MAINWINDOW_H
