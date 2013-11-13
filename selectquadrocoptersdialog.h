#ifndef SELECTQUADROCOPTERSDIALOG_H
#define SELECTQUADROCOPTERSDIALOG_H

#include <QDialog>

namespace Ui {
class SelectQuadrocoptersDialog;
}

class SelectQuadrocoptersDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SelectQuadrocoptersDialog(QWidget *parent = 0);
    ~SelectQuadrocoptersDialog();
    
private:
    Ui::SelectQuadrocoptersDialog *ui;
};

#endif // SELECTQUADROCOPTERSDIALOG_H
