import QtQuick

Rectangle {
    id: page
    anchors.fill: parent
    color: "#ffffff"

    Image {
        id: icon
        x: 20
        y: 20
        width: 73
        height: 41
        source: "luffy.jpg"
    }

    Rectangle {
        id: topLeftRect
        width: 73
        height: 41
        color: "#00ffffff"
        border.color: "#808080"
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 20
        anchors.topMargin: 20

        MouseArea {
            id: mouseArea
            anchors.fill: parent

            Connections {
                target: mouseArea
                function onClicked()
                {
                    page.state = "State1"
                }
            }
        }
    }

    Rectangle {
        id: middleRect
        width: 73
        height: 41
        color: "#00ffffff"
        border.color: "#808080"
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        MouseArea {
            id: mouseArea1
            anchors.fill: parent

            Connections {
                target: mouseArea1
                function onClicked()
                {
                    page.state = "State2"
                }
            }
        }
    }

    Rectangle {
        id: bottomLeftRect
        width: 73
        height: 41
        color: "#00ffffff"
        border.color: "#808080"
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        anchors.rightMargin: 20
        MouseArea {
            id: mouseArea2
            anchors.fill: parent

            Connections {
                target: mouseArea2
                function onClicked()
                {
                    page.state = "State3"
                }
            }
        }
    }

    states: [
        State {
            name: "State1"
        },
        State {
            name: "State2"

            PropertyChanges {
                target: icon
                x: middleRect.x
                y: middleRect.y
            }
        },
        State {
            name: "State3"

            PropertyChanges {
                target: icon
                x: bottomLeftRect.x
                y: bottomLeftRect.y
            }
        }
    ]

    transitions: [
        Transition {
            id: toState1
            ParallelAnimation {
                SequentialAnimation {
                    PauseAnimation {
                        duration: 0
                    }

                    PropertyAnimation {
                        target: icon
                        property: "y"
                        easing.amplitude: 1.5000
                        easing.type: Easing.InOutQuad
                        duration: 2000
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 0
                    }

                    PropertyAnimation {
                        target: icon
                        property: "x"
                        easing.type: Easing.InOutQuad
                        duration: 2000
                    }
                }
            }
            to: "State1"
            from: "State2,State3"
        },
        Transition {
            id: toState2
            ParallelAnimation {
                SequentialAnimation {
                    PauseAnimation {
                        duration: 0
                    }

                    PropertyAnimation {
                        target: icon
                        property: "y"
                        easing.type: Easing.OutBounce
                        duration: 2006
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 0
                    }

                    PropertyAnimation {
                        target: icon
                        property: "x"
                        easing.type: Easing.OutBounce
                        duration: 2000
                    }
                }
            }
            to: "State2"
            from: "State1,State3"
        },
        Transition {
            id: toState3
            ParallelAnimation {
                SequentialAnimation {
                    PauseAnimation {
                        duration: 0
                    }

                    PropertyAnimation {
                        target: icon
                        property: "y"
                        easing.type: Easing.InOutQuad
                        duration: 2000
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 0
                    }

                    PropertyAnimation {
                        target: icon
                        property: "x"
                        easing.type: Easing.InOutQuad
                        duration: 2000
                    }
                }
            }
            to: "State3"
            from: "State1,State2"
        }
    ]
}
