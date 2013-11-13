#include "selectquadrocoptersdialog.h"
#include "ui_selectquadrocoptersdialog.h"

SelectQuadrocoptersDialog::SelectQuadrocoptersDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectQuadrocoptersDialog)
{
    ui->setupUi(this);

    Qt::QStandardItemModel *model = new Q

    ui->listView->set
}

SelectQuadrocoptersDialog::~SelectQuadrocoptersDialog()
{
    delete ui;
}
