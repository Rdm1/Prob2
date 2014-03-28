#include <QApplication>
#include <QtGui>
#include <QObject>
#include <QTextCodec>
#include <QAction>
#include <QDateTimeEdit>
#include "interfaceform.h"
//#include "Interface.h"


int main(int argc, char *argv[])
{
   // Q_INIT_RESOURCE(Interface_resourse);
//#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
  QApplication::setGraphicsSystem("opengl");//"native", "raster" and "opengl"
//#endif
    QApplication app(argc, argv);
    QTextCodec::setCodecForTr( QTextCodec::codecForName("utf8") );
    Form interface;
    interface.setFixedSize(480,272);
    interface.show();
    return app.exec();
}

