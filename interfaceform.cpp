//#include <QtUiTools>
#include <QtGui>

#include "interfaceform.h"



// тут  будет мой код посмотрим на влада компьютере

//скачал и загрузил





























/*
InterfaceForm::InterfaceForm(QWidget *parent)
    : QWidget(parent)
{
    QUiLoader loader;

    QFile file(":/forms/calculatorform.ui");
    file.open(QFile::ReadOnly);
    QWidget *formWidget = loader.load(&file, this);
    file.close();

    ui_inputSpinBox1 = findChild<QSpinBox*>("inputSpinBox1");
    ui_inputSpinBox2 = findChild<QSpinBox*>("inputSpinBox2");
    ui_outputWidget = findChild<QLabel*>("outputWidget");

    QMetaObject::connectSlotsByName(this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(formWidget);
    setLayout(layout);

    setWindowTitle(tr("Calculator Builder"));
}

void CalculatorForm::on_inputSpinBox1_valueChanged(int value)
{
    ui_outputWidget->setText(QString::number(value + ui_inputSpinBox2->value()));
}

void CalculatorForm::on_inputSpinBox2_valueChanged(int value)
{
    ui_outputWidget->setText(QString::number(value + ui_inputSpinBox1->value()));
}
*/

