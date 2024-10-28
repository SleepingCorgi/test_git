import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Window {

    visible: true
    width: 800
    height: 450

    StackView {
        id: stackView
        anchors.fill: parent

        // 加载 MainPage.qml 文件中的页面
        initialItem: MainPage{}
    }

    Component{
        id: settingsPage
        SettingPage{}
    }

}
