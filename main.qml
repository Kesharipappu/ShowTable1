import QtQuick 2.15
import QtQuick.Controls 1.5
import CustomTypes 1.0

ApplicationWindow {
    visible: true
    width: 800
    height: 600
    title: "SQLite Data Display"

    TableView {
        width: parent.width
        height: parent.height

        model: CustomModel {}

        TableViewColumn {
            role: "name"
            title: "Name"
        }

        TableViewColumn {
            role: "fatherName"
            title: "Father's Name"
        }

        TableViewColumn {
            role: "motherName"
            title: "Mother's Name"
        }
    }
}
