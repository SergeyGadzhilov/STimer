import QtQuick 2.12
import SimpleTimer 1.0

Item {
   anchors.fill: parent
   STimer {
      id: _timer
   }

   Text {
      id: _clockFace
      width: parent.width
      height: parent.height
      font.pointSize: parent.height
      fontSizeMode: Text.Fit
      horizontalAlignment: Text.AlignHCenter
      verticalAlignment: Text.AlignVCenter
      text: Qt.formatDateTime(_timer.time, "hh:mm:ss")
   }
}
