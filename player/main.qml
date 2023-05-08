import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Text {
        id: status
        text: "STATUS"
        font.pointSize: 72
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
    }

    Button {
        text: "▶️"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: -200
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 100
        font.pointSize: 20
        onClicked: {status.text = "PLAY"; p.value = 0.1;}
    }
    Button {
        text: "⏸️"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: -100
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 100
        font.pointSize: 20
        onClicked: {status.text = "PAUSE";}
    }
    Button {
        text: "⏹"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 100
        font.pointSize: 20
        onClicked: {status.text = "STOP"; p.value = 0;}
    }
    Button {
        text: "⏪️"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: 100
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 100
        font.pointSize: 20
        onClicked: {status.text = "REWIND"; p.value -= 0.1;}
    }
    Button {
        text: "⏩️"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: 200
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 100
        font.pointSize: 20
        onClicked: {status.text = "FORWARD"; p.value += 0.1;}
    }
    ProgressBar{
        id: p
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 150
        width: 500
    }

}
