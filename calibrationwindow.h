#ifndef CALIBRATIONWINDOW_H
#define CALIBRATIONWINDOW_H

#include <QMainWindow>

namespace Ui {
class CalibrationWindow;
}

class CalibrationWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit CalibrationWindow(QWidget *parent = 0);
    ~CalibrationWindow();
    
private:
    Ui::CalibrationWindow *ui;
};

#endif // CALIBRATIONWINDOW_H
