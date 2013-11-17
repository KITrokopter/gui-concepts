#include "mainwindow.h"
#include "calibrationwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    CalibrationWindow c;
    c.show();
    w.show();

    return a.exec();
}
