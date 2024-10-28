import QtQuick 2.0
import QtQuick.Controls 2.12

Rectangle{
    id:settingpagebtn
    width:100
    height: 100
    color:btnColor

    property string btnText: ""
    property color btnColor: "lightblue"
    property color hoverColor: "gray"
    property int radius: 0
    property color textcolor: "black"

    signal spbclicked

    Text {
            anchors.centerIn: parent
            text: btnText
            color: textcolor  // 默认文字颜色
            font.pixelSize: 16
        }

    MouseArea{
        id:settingpagemouse
        anchors.fill:parent
        cursorShape: Qt.PointingHandCursor
        hoverEnabled: true

        onEntered: {
            // color = hoverColor
            settingpagebtn.width =110
            settingpagebtn.height = 110
        }

        onExited: {
            // color = btnColor
            settingpagebtn.width =100
            settingpagebtn.height = 100
        }

        onPressed: {
            settingpagebtn.width =100
            settingpagebtn.height = 100
        }

        onReleased:
        {
            settingpagebtn.width =110
            settingpagebtn.height = 110
            if(settingpagemouse.containsMouse)//鼠标在按钮范围才有效
            spbclicked()
        }

    }


}
