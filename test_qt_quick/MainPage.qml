import QtQuick 2.0
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Page {
    id: mainPage
    title: "Main Page"



    Image {
        id: bg1
        source: "images/mainPageImage.png"
        anchors.centerIn: parent
        scale:0.4  // 默认缩放比例
        z:0
    }

//    Button {
//        text: "Go to Settings"
//        anchors.centerIn: parent
//        onClicked: {
//            stackView.push(settingsPage)  // 切换到 SettingsPage
//            console.log("Button clicked!")
//        }
//    }

    MainPageButton{
        id:btn250
        x:595
        y:150
        // imageSource:"images/003.png"
        onBtnclicked: {
            console.log("MPButton clicked!")
            stackView.push(settingsPage)  // 切换到 SettingsPage
        }

    }
}
