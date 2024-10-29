#ifndef QTMODBUS_H
#define QTMODBUS_H

#include <QDebug>
#include <QMainWindow>
#include "zlibmodbus.h"
#include <QTimer>

namespace Ui {
class QtModbus;
}

class QtModbus : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtModbus(QWidget *parent = 0);
    ~QtModbus();

private slots:
    void on_writeButton_clicked();
    void on_readButton_clicked();
    void on_connectButton_clicked();

    void on_btnVibration_clicked();
    void MotorVibration();

    void on_btnStopVibration_clicked();
    void MotorStopVibration();

    void on_btnStart_2_clicked();
    void MotorStartRun(int Runmode);

    void on_ModeSetButton_clicked();
    void SetMode();

    void on_PointSetButton_clicked();

    void on_VibFrequencySetButton_clicked();
    void Set_VibFrequency();

    void on_FirmnessSetButton_clicked();
    void Set_Firmness();

    void on_PositionReadButton_clicked();

    void updateReadPositions();

    void on_AutoReadPositioncheckBox_stateChanged(int arg1);

    void updateReadSwitch();
    void on_AutoReadSwitchcheckBox_stateChanged(int arg1);


    void on_btnStart_1_clicked();



    void on_FlipTestcheckBox_stateChanged(int arg1);

private:
    Ui::QtModbus *ui;

    ZLibModbus mb;  //libModbus wrapper
    QTimer *ReadPosition_Tim;
    QTimer *ReadSwitch_Tim;
};

#endif // QTMODBUS_H
