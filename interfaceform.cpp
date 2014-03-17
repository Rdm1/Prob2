//#include <QtUiTools>
#include <QtGui>

#include <QStackedWidget>
#include "interfaceform.h"

Form::Form(QWidget* wgt)
    :QWidget(wgt){
setupUi(this);
setFixedSize(480,272);
setGeometry(0,0,480,272);


}

void Form ::keyPressEvent(QKeyEvent * pe)
{
    switch(pe->key())
        {
    case Qt::Key_Down:
         stackedWidget->setCurrentWidget(page);
         break;
    case Qt::Key_Up:
         stackedWidget->setCurrentWidget(page_2);
    default:
        QWidget::keyPressEvent(pe);
    }
}



























