#ifndef INTERFACEFORM_H
#define INTERFACEFORM_H

#include <QWidget>
#include <QPushButton>
#include "ui_Interface_Form.h"

class Form :public QWidget {
    Q_OBJECT
public :
    Form (QWidget* wgt = 0);
   private :
    Ui::Form ui;
public slots :
void generator();
void priemnik();
void vrc();
void parametri();
void dop_nastr();
void date();
void channel_kanal();
//void change_language();
};
#endif // INTERFACEFORM_H

