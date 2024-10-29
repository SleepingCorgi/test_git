#include "qtmodbus.h"
#include "ui_qtmodbus.h"

union position{
    int32_t val;
    uint16_t reg[2];
}position={0};

QtModbus::QtModbus(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtModbus)
{
    ui->setupUi(this);

    ReadPosition_Tim = new QTimer();
    ReadPosition_Tim ->setInterval(100);
    connect(ReadPosition_Tim,SIGNAL(timeout()),this,SLOT(updateReadPositions()));

    ReadSwitch_Tim = new QTimer();
    ReadSwitch_Tim ->setInterval(100);
    connect(ReadSwitch_Tim,SIGNAL(timeout()),this,SLOT(updateReadSwitch()));

}

QtModbus::~QtModbus()
{
    delete ui;
}

void QtModbus::on_connectButton_clicked()
{
    if (!mb.connect()) {
        qDebug() << "fail connect";
    //    QApplication::exit(-1);
    }
}

void QtModbus::on_writeButton_clicked()
{
    bool ok;
    quint32 mbVal = QString(ui->writeEdit->text()).toUInt(&ok);
    if (!mb.write(1, mbVal)) {
        qDebug() << "fail write";
       // QApplication::exit(-1);
    }
}

void QtModbus::on_readButton_clicked()
{
    ui->readEdit->setText(QString("%1").arg(mb.read(0x39)));
}


void QtModbus::on_btnVibration_clicked()
{
    MotorVibration();
}
void QtModbus::MotorVibration()
{
    mb.write(0x40,1);
}
void QtModbus::MotorStopVibration()
{
    mb.write(0x40,0);
}


void QtModbus::on_btnStopVibration_clicked()
{
    MotorStopVibration();
}


void QtModbus::on_btnStart_2_clicked()
{
    MotorStartRun(0x02);
}

void QtModbus::MotorStartRun(int Runmode)
{
    mb.write(0x0A,Runmode);
}


void QtModbus::on_ModeSetButton_clicked()
{
    SetMode();
}

void QtModbus::SetMode()
{
    bool ok;
    quint32 mbVal = QString(ui->ModeEdit->text()).toUInt(&ok);
    if (!mb.write(0x39, mbVal)) {
        qDebug() << "fail write";
    }
}

void QtModbus::on_PointSetButton_clicked()
{
    bool ok1,ok2;
    quint32 mbVal_1 = QString(ui->Point1Edit->text()).toUInt(&ok1);
    quint32 mbVal_2 = QString(ui->Point2Edit->text()).toUInt(&ok2);
    if (!mb.write(0x3B, mbVal_1)) {
        qDebug() << "fail write";
    }
    if (!mb.write(0x3D, mbVal_2)) {
        qDebug() << "fail write";
    }
}


void QtModbus::on_VibFrequencySetButton_clicked()
{
    Set_VibFrequency();
}

void QtModbus::Set_VibFrequency()
{
    bool ok;
    quint32 mbVal = QString(ui->VibFrequencyEdit->text()).toUInt(&ok);
    if (!mb.write(0x3A, mbVal)) {
        qDebug() << "fail write";
    }
}

void QtModbus::on_FirmnessSetButton_clicked()
{
    Set_Firmness();
}

void QtModbus::Set_Firmness()
{
    bool ok;
    quint32 mbVal = QString(ui->FirmnessEdit->text()).toUInt(&ok);
    if (!mb.write(0x3F, mbVal)) {
        qDebug() << "fail write";
    }
}


void QtModbus::on_PositionReadButton_clicked()
{
    ui->PositionEdit->setText(QString("%1").arg(mb.read(0x14,2)));
}

void QtModbus::updateReadPositions()
{
    qint32 position = mb.read(0x14,2);
    ui->PositionlistWidget->insertItem(0,QString::number(position));
}

void QtModbus::on_AutoReadPositioncheckBox_stateChanged(int arg1)
{
    if(this->ui->AutoReadPositioncheckBox->isChecked())
    {
        if(arg1!=0){ this->ReadPosition_Tim->start();}
    }
    else
    {
        this->ReadPosition_Tim->stop();
    }
}

void QtModbus::updateReadSwitch()
{
    quint16 switches = mb.read(0x36);
    QString binary_Switches = QString("%1").arg(switches, 8, 2, QChar('0'));
    ui->SwitchlistWidget->insertItem(0,binary_Switches);
}

void QtModbus::on_AutoReadSwitchcheckBox_stateChanged(int arg1)
{
    if(this->ui->AutoReadSwitchcheckBox->isChecked())
    {
        if(arg1!=0){ this->ReadSwitch_Tim->start();}
    }
    else
    {
        this->ReadSwitch_Tim->stop();
    }
}



void QtModbus::on_btnStart_1_clicked()
{
    MotorStartRun(0x01);
}


void QtModbus::on_FlipTestcheckBox_stateChanged(int arg1)
{
    if(this->ui->FlipTestcheckBox->isChecked())
    {
        if(arg1!=0){mb.write(0x41,0x00);}
    }
    else
    {
        mb.write(0x41,0x01);
    }
}

