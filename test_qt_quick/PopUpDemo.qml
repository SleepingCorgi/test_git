import QtQuick 2.0
import QtQuick.Controls 2.12

Dialog{
    id: optionDialog
    //title: "选择一个选项"
    anchors.centerIn: parent
    height: 300
    width: 350
    modal: true

    property int num

    signal optionSelected

    Rectangle {
            id: header
            height: 40
            color: "lightgray"
            anchors.top: parent.Top
            anchors.left: parent.left
            anchors.right: parent.right

            Text {
                id: titleText
                anchors.centerIn: parent
                font.pixelSize: 18
                text: "选择一个选项"
            }
            Drag.active: mouseArea.drag.active

            MouseArea {
                anchors.fill: parent
                drag.target: optionDialog  // 将整个弹窗作为拖动目标

                onPressed: {

                }
            }
        }

    Column {
        spacing: 10
        anchors.top: header.bottom
        anchors.left: parent.left
        anchors.right: parent.right

        RadioButton {
            id: option1
            text: "苹果"
        }

        RadioButton {
            id: option2
            text: "香蕉"
        }

        RadioButton {
            id: option3
            text: "橘子"
        }

        Row {
            spacing: 10
            anchors.horizontalCenter: parent.horizontalCenter

            Button {
                text: "确定"
                onClicked: {
                    if (option1.checked) {
                        console.log("选择了选项 1");
                    } else if (option2.checked) {
                        console.log("选择了选项 2");
                    } else if (option3.checked) {
                        console.log("选择了选项 3");
                        mode = 2;
                        test3DArray[0][0][0] = 3
                        console.log(test3DArray[0][0][0]);
                    }
                    optionDialog.close();  // 关闭弹窗
                    optionSelected()
                }
            }

            Button {
                text: "取消"
                onClicked: {
                    optionDialog.close();  // 只关闭弹窗
                }
            }
        }
    }
}
