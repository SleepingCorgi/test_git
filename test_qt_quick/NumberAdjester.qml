import QtQuick 2.0
import QtQuick.Controls 2.12

Rectangle {
    id: numberAdjuster
    width: 160
    height: 40
    color: "#f0f0f0"
    radius: 5
    border.color: "#ccc"

    // 定义属性来设置初始值、最小值和最大值
    property int minValue: 0
    property int maxValue: 100
    property int value: 50

    // 更新显示的数字
    property alias currentValue: displayText.text

    function decrementValue(){
        if (numberAdjuster.value > numberAdjuster.minValue) {
            numberAdjuster.value--;
        }
    }

    Row {
        anchors.fill: parent
        anchors.margins: 5
        spacing: 5

        // 减小按钮
        Button {
            text: "-"
            width: 40


            MouseArea {
                id: decrementArea
                anchors.fill: parent

                onPressed: {
                    delayTimer.start();
                    decrementValue();
                }
                onReleased: {
                    delayTimer.stop();
                    decrementTimer.stop();
                }
            }

            // 定时器用于延迟
            Timer {
                id: delayTimer
                interval: 200
                repeat:false
                onTriggered: decrementTimer.start();
            }

            // 定时器用于长按减少
            Timer {
                id: decrementTimer
                interval: 100
                repeat: true
                running: false
                onTriggered: decrementValue()
            }
        }

        // 显示数字
        Text {
            id: displayText
            text: numberAdjuster.value
            font.pointSize: 18
            width: 60
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }

        // 增加按钮
        Button {
            text: "+"
            width: 40
            onClicked: {
                if (numberAdjuster.value < numberAdjuster.maxValue) {
                    numberAdjuster.value++;
                }
            }
            // 长按增加
            Repeater {
                Timer {
                    interval: 100
                    repeat: true
                    running: false
                    onTriggered: {
                        if (numberAdjuster.value < numberAdjuster.maxValue) {
                            numberAdjuster.value++;
                        }
                    }
                }
                MouseArea {
                    anchors.fill: parent
                    onPressed: running = true
                    onReleased: running = false
                }
            }
        }
    }
}
