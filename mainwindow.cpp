#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "selectquadrocoptersdialog.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->searchButton, SIGNAL(released()), SLOT(handleSearchButton()));
}

void MainWindow::handleSearchButton() {
    if (!select) {
        select = new SelectQuadrocoptersDialog(this);
    }

    select->show();
    select->raise();
    select->activateWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}
