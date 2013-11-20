#include "selectquadrocoptersdialog.h"
#include "ui_selectquadrocoptersdialog.h"

#include <QString>
#include <QStringList>
#include <QStringListModel>

#include <string>
#include <sstream>

SelectQuadrocoptersDialog::SelectQuadrocoptersDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectQuadrocoptersDialog)
{
    ui->setupUi(this);
}

SelectQuadrocoptersDialog::~SelectQuadrocoptersDialog()
{
    delete ui;
}
