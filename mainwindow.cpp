#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "selectquadrocoptersdialog.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Q1Button, SIGNAL(released()), SLOT(handleSearchButton()));
    connect(ui->aboutButton, SIGNAL(triggered()), SLOT(handleAboutButton()));
}

void MainWindow::handleSearchButton() {
    if (!select) {
        select = new SelectQuadrocoptersDialog(this);
    }

    select->show();
    select->raise();
    select->activateWindow();
}

void MainWindow::handleAboutButton() {
    if (!about) {
        about = new AboutDialog(this);
    }

    about->show();
    about->raise();
    about->activateWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}
