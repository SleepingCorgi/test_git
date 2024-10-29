/********************************************************************************
** Form generated from reading UI file 'qtmodbus.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTMODBUS_H
#define UI_QTMODBUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtModbus
{
public:
    QWidget *centralWidget;
    QPushButton *connectButton;
    QPushButton *btnStart_2;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *PositionReadButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *PositionEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *PointSetButton;
    QLineEdit *Point2Edit;
    QPushButton *FirmnessSetButton;
    QLineEdit *Point1Edit;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *FirmnessEdit;
    QPushButton *VibFrequencySetButton;
    QLineEdit *VibFrequencyEdit;
    QLabel *label_2;
    QLineEdit *ModeEdit;
    QPushButton *btnStopVibration;
    QPushButton *btnVibration;
    QPushButton *ModeSetButton;
    QListWidget *PositionlistWidget;
    QCheckBox *AutoReadPositioncheckBox;
    QListWidget *SwitchlistWidget;
    QCheckBox *AutoReadSwitchcheckBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *readEdit;
    QPushButton *readButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *writeEdit;
    QPushButton *writeButton;
    QPushButton *btnStart_1;
    QCheckBox *FlipTestcheckBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtModbus)
    {
        if (QtModbus->objectName().isEmpty())
            QtModbus->setObjectName(QString::fromUtf8("QtModbus"));
        QtModbus->resize(712, 401);
        centralWidget = new QWidget(QtModbus);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(10, 22, 75, 31));
        btnStart_2 = new QPushButton(centralWidget);
        btnStart_2->setObjectName(QString::fromUtf8("btnStart_2"));
        btnStart_2->setGeometry(QRect(120, 270, 80, 31));
        horizontalLayoutWidget_5 = new QWidget(centralWidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(340, 70, 201, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        PositionReadButton = new QPushButton(horizontalLayoutWidget_5);
        PositionReadButton->setObjectName(QString::fromUtf8("PositionReadButton"));

        horizontalLayout_5->addWidget(PositionReadButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        PositionEdit = new QLineEdit(horizontalLayoutWidget_5);
        PositionEdit->setObjectName(QString::fromUtf8("PositionEdit"));

        horizontalLayout_5->addWidget(PositionEdit);

        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 70, 321, 181));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        PointSetButton = new QPushButton(gridLayoutWidget);
        PointSetButton->setObjectName(QString::fromUtf8("PointSetButton"));

        gridLayout_2->addWidget(PointSetButton, 1, 4, 1, 1);

        Point2Edit = new QLineEdit(gridLayoutWidget);
        Point2Edit->setObjectName(QString::fromUtf8("Point2Edit"));

        gridLayout_2->addWidget(Point2Edit, 1, 2, 1, 1);

        FirmnessSetButton = new QPushButton(gridLayoutWidget);
        FirmnessSetButton->setObjectName(QString::fromUtf8("FirmnessSetButton"));

        gridLayout_2->addWidget(FirmnessSetButton, 2, 2, 1, 3);

        Point1Edit = new QLineEdit(gridLayoutWidget);
        Point1Edit->setObjectName(QString::fromUtf8("Point1Edit"));

        gridLayout_2->addWidget(Point1Edit, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 1, 1, 1);

        FirmnessEdit = new QLineEdit(gridLayoutWidget);
        FirmnessEdit->setObjectName(QString::fromUtf8("FirmnessEdit"));

        gridLayout_2->addWidget(FirmnessEdit, 2, 0, 1, 1);

        VibFrequencySetButton = new QPushButton(gridLayoutWidget);
        VibFrequencySetButton->setObjectName(QString::fromUtf8("VibFrequencySetButton"));

        gridLayout_2->addWidget(VibFrequencySetButton, 3, 2, 1, 3);

        VibFrequencyEdit = new QLineEdit(gridLayoutWidget);
        VibFrequencyEdit->setObjectName(QString::fromUtf8("VibFrequencyEdit"));

        gridLayout_2->addWidget(VibFrequencyEdit, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 3, 1, 1);

        ModeEdit = new QLineEdit(gridLayoutWidget);
        ModeEdit->setObjectName(QString::fromUtf8("ModeEdit"));

        gridLayout_2->addWidget(ModeEdit, 0, 0, 1, 1);

        btnStopVibration = new QPushButton(gridLayoutWidget);
        btnStopVibration->setObjectName(QString::fromUtf8("btnStopVibration"));

        gridLayout_2->addWidget(btnStopVibration, 4, 2, 1, 3);

        btnVibration = new QPushButton(gridLayoutWidget);
        btnVibration->setObjectName(QString::fromUtf8("btnVibration"));

        gridLayout_2->addWidget(btnVibration, 4, 0, 1, 2);

        ModeSetButton = new QPushButton(gridLayoutWidget);
        ModeSetButton->setObjectName(QString::fromUtf8("ModeSetButton"));

        gridLayout_2->addWidget(ModeSetButton, 0, 2, 1, 1);

        PositionlistWidget = new QListWidget(centralWidget);
        PositionlistWidget->setObjectName(QString::fromUtf8("PositionlistWidget"));
        PositionlistWidget->setGeometry(QRect(350, 140, 131, 141));
        AutoReadPositioncheckBox = new QCheckBox(centralWidget);
        AutoReadPositioncheckBox->setObjectName(QString::fromUtf8("AutoReadPositioncheckBox"));
        AutoReadPositioncheckBox->setGeometry(QRect(350, 120, 141, 20));
        SwitchlistWidget = new QListWidget(centralWidget);
        SwitchlistWidget->setObjectName(QString::fromUtf8("SwitchlistWidget"));
        SwitchlistWidget->setGeometry(QRect(510, 140, 131, 141));
        AutoReadSwitchcheckBox = new QCheckBox(centralWidget);
        AutoReadSwitchcheckBox->setObjectName(QString::fromUtf8("AutoReadSwitchcheckBox"));
        AutoReadSwitchcheckBox->setGeometry(QRect(510, 120, 181, 18));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(550, 0, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        readEdit = new QLineEdit(verticalLayoutWidget);
        readEdit->setObjectName(QString::fromUtf8("readEdit"));
        QFont font;
        font.setPointSize(12);
        readEdit->setFont(font);
        readEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(readEdit);

        readButton = new QPushButton(verticalLayoutWidget);
        readButton->setObjectName(QString::fromUtf8("readButton"));

        horizontalLayout_3->addWidget(readButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        writeEdit = new QLineEdit(verticalLayoutWidget);
        writeEdit->setObjectName(QString::fromUtf8("writeEdit"));
        writeEdit->setFont(font);

        horizontalLayout_2->addWidget(writeEdit);

        writeButton = new QPushButton(verticalLayoutWidget);
        writeButton->setObjectName(QString::fromUtf8("writeButton"));

        horizontalLayout_2->addWidget(writeButton);


        verticalLayout->addLayout(horizontalLayout_2);

        btnStart_1 = new QPushButton(centralWidget);
        btnStart_1->setObjectName(QString::fromUtf8("btnStart_1"));
        btnStart_1->setGeometry(QRect(20, 270, 80, 31));
        FlipTestcheckBox = new QCheckBox(centralWidget);
        FlipTestcheckBox->setObjectName(QString::fromUtf8("FlipTestcheckBox"));
        FlipTestcheckBox->setGeometry(QRect(230, 280, 111, 18));
        QtModbus->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtModbus);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 712, 21));
        QtModbus->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtModbus);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtModbus->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtModbus);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtModbus->setStatusBar(statusBar);

        retranslateUi(QtModbus);

        QMetaObject::connectSlotsByName(QtModbus);
    } // setupUi

    void retranslateUi(QMainWindow *QtModbus)
    {
        QtModbus->setWindowTitle(QApplication::translate("QtModbus", "QtModbus", nullptr));
        connectButton->setText(QApplication::translate("QtModbus", "Connect", nullptr));
        btnStart_2->setText(QApplication::translate("QtModbus", "Start_2", nullptr));
        PositionReadButton->setText(QApplication::translate("QtModbus", "Read Position", nullptr));
        PointSetButton->setText(QApplication::translate("QtModbus", "Set point", nullptr));
        FirmnessSetButton->setText(QApplication::translate("QtModbus", "Set firmness", nullptr));
        label->setText(QApplication::translate("QtModbus", "%", nullptr));
        label_3->setText(QApplication::translate("QtModbus", "%", nullptr));
        label_4->setText(QApplication::translate("QtModbus", "Hz", nullptr));
        VibFrequencySetButton->setText(QApplication::translate("QtModbus", "Set Vib_Frequency", nullptr));
        label_2->setText(QApplication::translate("QtModbus", "%", nullptr));
        btnStopVibration->setText(QApplication::translate("QtModbus", "stop vibration", nullptr));
        btnVibration->setText(QApplication::translate("QtModbus", "vibration", nullptr));
        ModeSetButton->setText(QApplication::translate("QtModbus", "Set Mode", nullptr));
        AutoReadPositioncheckBox->setText(QApplication::translate("QtModbus", "\350\207\252\345\212\250\350\257\273\344\275\215\347\275\256", nullptr));
        AutoReadSwitchcheckBox->setText(QApplication::translate("QtModbus", "\350\207\252\345\212\250\350\257\273\345\274\200\345\205\263", nullptr));
        readButton->setText(QApplication::translate("QtModbus", "Read", nullptr));
        writeButton->setText(QApplication::translate("QtModbus", "Write", nullptr));
        btnStart_1->setText(QApplication::translate("QtModbus", "// Start_1", nullptr));
        FlipTestcheckBox->setText(QApplication::translate("QtModbus", "Pedal flip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtModbus: public Ui_QtModbus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTMODBUS_H
