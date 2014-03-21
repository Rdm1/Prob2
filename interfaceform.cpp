#include <QtGui>
#include <QPushButton>
#include "interfaceform.h"
#include "ui_Interface_Form.h"

Form::Form(QWidget*parent)
:QWidget(parent)
{
    setFixedSize(480,272);
    ui.setupUi(this);
    ui.comboBox_menu->setFocus();
    connect(ui.comboBox_menu,SIGNAL(currentIndexChanged(QString )),this,SLOT(generator()));//выбор главного меню
    connect(ui.comboBox_settings_param,SIGNAL(currentIndexChanged(QString )),this,SLOT(parametri()));//выбор параметры
    connect(ui.comboBox_settings_extParam,SIGNAL(currentIndexChanged(QString)),this,SLOT(dop_nastr()));// выбор доп.параметров
    connect(ui.comboBox_settings_timeSet,SIGNAL(currentIndexChanged(QString)),this,SLOT(date()));//выбор дата/время
    connect(ui.comboBox_settings_2chann,SIGNAL(currentIndexChanged(QString)),this,SLOT(channel_kanal()));//выбор параметров канала
    //connect(ui.comboBox_settings_2chann_2,SIGNAL(currentIndexChanged(QString)),this,SLOT(change_language()));//выбор языка

    connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(priemnik()));
    connect(ui.pushButton_resiever_settings,SIGNAL(clicked()),this,SLOT(vrc()));
    ui.page_3->setHidden(true);
    ui.page_2->setHidden(true);
    ui.page_4->setHidden(true);
    ui.page_5->setHidden(true);
    ui.page_6->setHidden(true);
    ui.page_7->setHidden(true);
    ui.page_8->setHidden(true);
    ui.page_10->setHidden(true);
    ui.page_15->setHidden(true);

    ui.page->setShown(true);

    ui.page_16->setHidden(true);
    ui.page_11->setHidden(true);
    ui.page_9->setHidden(true);
    ui.page_10->setHidden(true);

}

//connect( ui.comboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(XXX()));

void Form ::generator(){
    if(ui.comboBox_menu->currentText()==tr("Общие")){
       ui.page_2->setHidden(true);
       ui.page_3->setHidden(true);
       ui.page_4->setHidden(true);
       ui.page_5->setHidden(true);
       ui.page_6->setHidden(true);
       ui.page_7->setHidden(true);
       ui.page_8->setHidden(true);
       ui.page_10->setHidden(true);

       ui.page->setShown(true);

       ui.page_16->setHidden(true);
       ui.page_11->setHidden(true);
       ui.page_9->setHidden(true);
       ui.page_10->setHidden(true);
    }

    if(ui.comboBox_menu->currentText()==tr("Приёмник")){
        ui.page->setHidden(true);
        ui.page_2->setHidden(true);
        ui.page_4->setHidden(true);
        ui.page_5->setHidden(true);
        ui.page_6->setHidden(true);
        ui.page_7->setHidden(true);
        ui.page_8->setHidden(true);
        ui.page_10->setHidden(true);
        ui.page_15->setHidden(true);
        ui.page_16->setHidden(true);
        ui.page_11->setHidden(true);
        ui.page_9->setHidden(true);
        ui.page_10->setHidden(true);

        ui.page_3->setShown(true);
      }

    if(ui.comboBox_menu->currentText()==tr("ПЭП")){
        ui.page->setHidden(true);
        ui.page_2->setHidden(true);
        ui.page_3->setHidden(true);
        ui.page_4->setHidden(true);
        ui.page_6->setHidden(true);
        ui.page_7->setHidden(true);
        ui.page_8->setHidden(true);
        ui.page_15->setHidden(true);
        ui.page_16->setHidden(true);
        ui.page_11->setHidden(true);
        ui.page_9->setHidden(true);
        ui.page_10->setHidden(true);

       ui.page_5->setShown(true);
      }
    if(ui.comboBox_menu->currentText()==tr("Обьект")){
        ui.page->setHidden(true);
        ui.page_2->setHidden(true);
        ui.page_3->setHidden(true);
        ui.page_4->setHidden(true);
        ui.page_5->setHidden(true);
        ui.page_7->setHidden(true);
        ui.page_8->setHidden(true);
        ui.page_15->setHidden(true);
        ui.page_16->setHidden(true);
        ui.page_11->setHidden(true);
        ui.page_9->setHidden(true);
        ui.page_10->setHidden(true);

        ui.page_6->setShown(true);
      }
    if(ui.comboBox_menu->currentText()==tr("Настройка")){
        ui.page->setHidden(true);
        ui.page_2->setHidden(true);
        ui.page_3->setHidden(true);
        ui.page_4->setHidden(true);
        ui.page_5->setHidden(true);
        ui.page_6->setHidden(true);
        ui.page_8->setHidden(true);
        ui.page_15->setHidden(true);

        ui.page_10->setShown(true);
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
        ui.page_15->setHidden(true);
        ui.page_16->setHidden(true);
        ui.page_11->setHidden(true);
        ui.page_9->setHidden(true);
        ui.page_10->setHidden(true);

        ui.page_8->setShown(true);
      }

}
void Form::priemnik(){
    ui.page->setHidden(true);
    ui.page_2->setHidden(true);
    ui.page_3->setHidden(true);
    ui.page_4->setHidden(true);
    ui.page_5->setHidden(true);
    ui.page_6->setHidden(true);
    ui.page_7->setHidden(true);
    ui.page_8->setHidden(true);

    ui.page_15->setShown(true);
}
void Form::vrc(){
    ui.page->setHidden(true);
    ui.page_2->setHidden(true);
    ui.page_3->setHidden(true);
    ui.page_5->setHidden(true);
    ui.page_6->setHidden(true);
    ui.page_7->setHidden(true);
    ui.page_8->setHidden(true);
    ui.page_10->setHidden(true);
    ui.page_15->setHidden(true);

   ui.page_4->setShown(true);
}
void Form::parametri(){
     if(ui.comboBox_settings_param->currentText()==tr("Вкл")){
         ui.page_9->setHidden(true);
         ui.page_11->setHidden(true);
         ui.page_10->setHidden(true);

         ui.page_16->setShown(true);
     }
}
void Form::dop_nastr(){
    if(ui.comboBox_settings_extParam->currentText()==tr("Вкл")){
        ui.page_16->setHidden(true);
        ui.page_11->setHidden(true);
        ui.page_10->setHidden(true);

        ui.page_9->setShown(true);
    }
}
void Form::date(){
     if(ui.comboBox_settings_timeSet->currentText()==tr("Вкл")){
         ui.page_16->setHidden(true);
         ui.page_9->setHidden(true);
         ui.page_10->setHidden(true);

         ui.page_11->setShown(true);

     }
}
void Form::channel_kanal(){
     if(ui.comboBox_settings_2chann->currentText()==tr("Вкл")){
    ui.page_16->setHidden(true);
    ui.page_11->setHidden(true);
    ui.page_9->setHidden(true);

    ui.page_10->setShown(true);
}
}
