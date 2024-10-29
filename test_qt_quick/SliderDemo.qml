import QtQuick 2.0
import QtQuick.Controls 2.12

Rectangle {
    width: 400
    height: 100
    color: "#f0f0f0"
    radius: 10
    border.color: "#ccc"

    property int minValue: 0
    property int maxValue: 100
    property int leftValue: 20
    property int rightValue: 80

    // 水平条背景
    Rectangle {
        id: track
        width: parent.width - 40
        height: 8
        color: "#d0d0d0"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        radius: 4
    }

    // 左侧可拖动点
    Rectangle {
        id: leftHandle
        width: 20
        height: 20
        color: "#3498db"
        radius: 10
        border.color: "#2980b9"
        x: track.x + (leftValue / maxValue) * track.width - width / 2
        anchors.verticalCenter: track.verticalCenter

        Text {
            text: leftValue
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.bottom
        }

        MouseArea {
            id: leftDragArea
            anchors.fill: parent
            drag.target: parent
            drag.axis: Drag.XAxis
            drag.minimumX: track.x - parent.width / 2
            drag.maximumX: rightHandle.x - parent.width
            onReleased: {
                // 更新 leftValue
                leftValue = Math.round((leftHandle.x - track.x + leftHandle.width / 2) / track.width * maxValue);
            }
            onPositionChanged: {
                leftValue = Math.round((leftHandle.x - track.x + leftHandle.width / 2) / track.width * maxValue);
            }
        }
    }

    // 右侧可拖动点
    Rectangle {
        id: rightHandle
        width: 20
        height: 20
        color: "#e74c3c"
        radius: 10
        border.color: "#c0392b"
        x: track.x + (rightValue / maxValue) * track.width - width / 2
        anchors.verticalCenter: track.verticalCenter

        Text {
            text: rightValue
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.bottom
        }

        MouseArea {
            id: rightDragArea
            anchors.fill: parent
            drag.target: parent
            drag.axis: Drag.XAxis
            drag.minimumX: leftHandle.x + leftHandle.width
            drag.maximumX: track.x + track.width - parent.width / 2
            onReleased: {
                // 更新 rightValue
                rightValue = Math.round((rightHandle.x - track.x + rightHandle.width / 2) / track.width * maxValue);
            }
            onPositionChanged: {
                rightValue = Math.round((rightHandle.x - track.x + rightHandle.width / 2) / track.width * maxValue);
            }
        }
    }
}
