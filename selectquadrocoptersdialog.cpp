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

    QStringList *list = new QStringList();

    for (int i = 1; i <= 100; i++) {
        std::stringstream ss;
        ss << i;

        std::string str = std::string("Quadrocopter ") + ss.str();

        list->append(*(new QString(str.c_str())));
    }

    QStringListModel *model = new QStringListModel(*list, NULL);

    ui->listView->setModel(model);
}

SelectQuadrocoptersDialog::~SelectQuadrocoptersDialog()
{
    delete ui;
}
