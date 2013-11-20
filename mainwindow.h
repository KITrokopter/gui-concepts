#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "selectquadrocoptersdialog.h"
#include "aboutdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    SelectQuadrocoptersDialog *select = 0;
    AboutDialog *about = 0;

private slots:
    void handleSearchButton();
    void handleAboutButton();
};

#endif // MAINWINDOW_H
