//#include <QtUiTools>
#include <QtGui>

#include "interfaceform.h"
#include "ui_Interface_Form.h"

Form::Form(QWidget*parent)
:QWidget(parent)
{
    ui.setupUi(this);
    ui.comboBox_menu->setFocus();
    connect(ui.comboBox_menu,SIGNAL(currentIndexChanged(QString )),this,SLOT(generator()));
  //  connect(ui.comboBox_menu,SIGNAL(currentIndexChanged(QString )),this,SLOT(priemnik()));
}

//connect( ui.comboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(XXX()));

void Form ::generator(){
    if(ui.comboBox_menu->currentText()==tr("Общие")){
       ui.page->setHidden(true);
       ui.page_3->setHidden(true);
       ui.page_4->setHidden(true);
       ui.page_5->setHidden(true);
       ui.page_6->setHidden(true);
       ui.page_7->setHidden(true);
       ui.page_8->setHidden(true);

        ui.page_2->setShown(true);
    }

    if(ui.comboBox_menu->currentText()==tr("Генератор")){
        ui.page->setHidden(true);
       ui.page_2->setHidden(true);
       ui.page_3->setHidden(true);
       ui.page_4->setHidden(true);
       ui.page_5->setHidden(true);
       ui.page_6->setHidden(true);
       ui.page_7->setHidden(true);
       ui.page_8->setHidden(true);

       ui.page->setShown(true);
    }
    if(ui.comboBox_menu->currentText()==tr("Приёмник")){
        ui.page->setHidden(true);
        ui.page_2->setHidden(true);
        ui.page_4->setHidden(true);
        ui.page_5->setHidden(true);
        ui.page_6->setHidden(true);
        ui.page_7->setHidden(true);
        ui.page_8->setHidden(true);

       ui.page_3->setShown(true);
      }
    if(ui.comboBox_menu->currentText()==tr("Обьект")){
        ui.page->setHidden(true);
        ui.page_2->setHidden(true);
        ui.page_3->setHidden(true);
        ui.page_5->setHidden(true);
        ui.page_6->setHidden(true);
        ui.page_7->setHidden(true);
        ui.page_8->setHidden(true);

       ui.page_4->setShown(true);
      }
    if(ui.comboBox_menu->currentText()==tr("ПЭП")){
        ui.page->setHidden(true);
        ui.page_2->setHidden(true);
        ui.page_3->setHidden(true);
        ui.page_4->setHidden(true);
        ui.page_6->setHidden(true);
        ui.page_7->setHidden(true);
        ui.page_8->setHidden(true);

       ui.page_5->setShown(true);
      }
    if(ui.comboBox_menu->currentText()==tr("Настройки")){
        ui.page->setHidden(true);
        ui.page_2->setHidden(true);
        ui.page_3->setHidden(true);
        ui.page_4->setHidden(true);
        ui.page_5->setHidden(true);
        ui.page_7->setHidden(true);
        ui.page_8->setHidden(true);

       ui.page_6->setShown(true);
      }
    if(ui.comboBox_menu->currentText()==tr("Программа")){
        ui.page->setHidden(true);
        ui.page_2->setHidden(true);
        ui.page_3->setHidden(true);
        ui.page_4->setHidden(true);
        ui.page_5->setHidden(true);
        ui.page_6->setHidden(true);
        ui.page_8->setHidden(true);

       ui.page_7->setShown(true);
      }
    if(ui.comboBox_menu->currentText()==tr("Программа")){
        ui.page->setHidden(true);
        ui.page_2->setHidden(true);
        ui.page_3->setHidden(true);
        ui.page_4->setHidden(true);
        ui.page_5->setHidden(true);
        ui.page_6->setHidden(true);
        ui.page_7->setHidden(true);

        ui.page_8->setShown(true);
      }
}























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

