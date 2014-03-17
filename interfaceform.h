#ifndef INTERFACEFORM_H
#define INTERFACEFORM_H

#include <QWidget>

#include "ui_Interface_Form.h"

class Form :public QWidget,public Ui::Form {
    Q_OBJECT
public :
    Form (QWidget* wgt = 0):QWidget (wgt)
    {
        setupUi(this);
    }
};

#endif // INTERFACEFORM_H

