import QtQuick 2.12
import QtQuick.Window 2.12


Window {
   id: _mainWindow
   visible: true
   minimumHeight: 65
   minimumWidth: 260
   title: qsTr("STimer")

   ClockFace {
      anchors.fill: parent
   }
}
