import QtQuick 2.0
import QtQuick.Controls 2.12

Rectangle{
    id: mainpagebutton
    width: 120
    height: 175
    color: "transparent"  // 透明背景

    signal btnclicked
    property alias imageSource: buttonImage.source

    Image {
        id: buttonImage
        source: "images/pedal-b  utton.png"  // 替换为你的图片路径
        //anchors.fill: parent
        anchors.centerIn: parent
        smooth: true
        scale: 0.5  // 默认缩放比例
    }

    Text {
        id: buttontext
        text: qsTr("text-001")
        anchors.centerIn: parent
        color:"black" //默认颜色
        font.pixelSize: 16
    }

    MouseArea{
        anchors.fill: parent
        cursorShape: Qt.PointingHandCursor
        hoverEnabled: true

        onClicked: {
//            buttonImage.scale = 0.6
//            buttontext.color = "white"
//            //buttonImage.color = "gray"
            btnclicked();
        }

        onPressed: {
            buttonImage.scale = 0.5
            buttontext.color = "white"
            //buttonImage.color = "gray"
        }

        onReleased: {
            buttonImage.scale = 0.6;  // 恢复原始大小
            //buttonImage.color = "transparent";  // 恢复图片颜色
            buttontext.color = "black";  // 恢复文字颜色
        }

        onEntered: {
            buttonImage.scale = 0.6
            console.log("Button entered")
            buttontext.color = "white";
        }

        onExited: {
            buttonImage.scale = 0.5;  // 鼠标离开时恢复原大小
            buttontext.color = "black";  // 恢复文字颜色
        }
    }
}
