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

    QApplication app(argc, argv);
    Form interface;
    interface.resize(480,400);
    interface.show();
    return app.exec();
}

