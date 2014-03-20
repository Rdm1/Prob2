#ifndef INTERFACEFORM_H
#define INTERFACEFORM_H

#include <QWidget>

#include "ui_Interface_Form.h"

class Form :public QWidget {
    Q_OBJECT
public :
    Form (QWidget* wgt = 0);
   private :
    Ui::Form ui;
public slots :
void generator();
//void priemnik();
};
#endif // INTERFACEFORM_H

