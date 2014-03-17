#ifndef INTERFACEFORM_H
#define INTERFACEFORM_H

#include <QWidget>
#include <QStackedWidget>
#include "ui_Interface_Form.h"

class Form :public QWidget,public Ui::Form {
    Q_OBJECT
public :
    Form (QWidget* wgt = 0);

     void keyPressEvent(QKeyEvent * );
};

#endif // INTERFACEFORM_H

