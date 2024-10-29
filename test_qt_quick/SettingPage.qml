import QtQuick 2.0
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Page {
    id: settingsPage
    title: "Settings"

    property int mode: 0
    property int submode: 1
    property var test3DArray: []
    property var valueToText: {
        1: "苹果",
        2: "香蕉",
        3: "橘子",
        4: "葡萄",
        5: "西瓜",
        6: "梨",
        7: "桃",
        8: "樱桃",
        9: btn001_1_1
    }

    Component.onCompleted: {
        // 定义一个 2x2x2 的三维数组
        test3DArray = [
            [ [1, 2], [3, 4] ],
            [ [5, 6], [7, 8] ]
        ];
        console.log("三维数组初始化完成:", test3DArray[1][0][1]);
    }

    header: ToolBar {
        Label {
            text: "Settings"
            font.pixelSize: 20
        }
    }

    Rectangle {
        anchors.fill: parent
        color: "lightgray"

        Button {
            text: "Back to Main Page"
            anchors.centerIn: parent
            onClicked: stackView.pop()  // 回到上一页面
        }
    }

    SettingPageButton{
        id:btn001
        x:0
        y:0
        btnText: "btn001"
        onSpbclicked: {
            console.log("SPButton001 clicked!");
            mode = 1;
            handleBtnClick(mode);
        }
    }

    SettingPageButton{
        id:btn002
        x:120
        y:0
        btnText: "btn002"
        onSpbclicked: {
            console.log(test3DArray[0][0][0]);
            mode = 2;
            handleBtnClick(mode);

        }
    }

    SettingPageButton{
        id:btn001_1
        x:0
        y:120
        btnText: "btn001_1"
        visible: mode===1 ? 1:0
        onSpbclicked: {
            console.log("SPButton001_1 clicked!");
            submode = 1;
        }
    }

    SettingPageButton{
        id:btn001_1_1
        x:0
        y:240
        btnText: valueToText[test3DArray[0][0][0]]
        onSpbclicked: {
            optionDialog.open()
        }
    }

    function handleBtnClick(){
        if(mode === 1){
            btn001.color = "blue"
            btn001.textcolor = "white"
        }else{
            btn001.color = btn001.btnColor
            btn001.textcolor = "black"
        }
        if(mode === 2){
            btn002.color = "blue"
        }else{
            btn002.color = btn002.btnColor
        }
    }

    // 引入 OptionDialog 组件
    PopUpDemo {
        id: optionDialog
        num: 0
        onOptionSelected: {
            console.log("chufa")
            updateBtnName()
        }
    }

    function updateBtnName(){
        valueToText[9].btnText=valueToText[test3DArray[0][0][0]]
        for(var i = 0;i<10;i++){

        }
    }

    NumberAdjester{
        id: adjuster1
        anchors.right: parent.right
        minValue: 10
        maxValue: 105
        value: 100  // 初始值

        onCurrentValueChanged: {
            console.log("Current value: " + currentValue)
        }
    }

    SliderDemo{
        id:sliderDemo1
        anchors.right: parent.right
        anchors.bottom: parent.bottom
    }

}



