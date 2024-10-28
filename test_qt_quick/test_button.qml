import QtQuick 2.0

Rectangle {
    width: 100
    height: 50
    color: "green"

    Text {
        text: "Click Me"
        font.pixelSize: 20
        anchors.centerIn: parent
    }

    MouseArea {
        anchors.fill: parent
        onClicked: console.log("Button clicked")
    }
}
