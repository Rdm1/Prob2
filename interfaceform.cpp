#include <QtGui>
#include <QPushButton>
#include "interfaceform.h"
#include "ui_Interface_Form.h"

//#include <QDebug>
//#include <QDesktopWidget>
//#include <QScreen>
//#include <QMessageBox>
//#include <QMetaEnum>


Form::Form(QWidget*parent)
:QWidget(parent)//,
//ui(new Ui::Form)
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

    connect(ui.pushButton_Graph,SIGNAL(clicked()),this,SLOT(graph_on()));

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

    ui.customPlot->setHidden(true);//GRAPH
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



////////////////////////////
/////////*Graph part*//////

void Form ::graph_on(){ //slot
    ui.stackedWidget->setHidden(true);
    ui.stackedWidget_2->setHidden(true);

    ui.customPlot->setShown(true);
    setupRealtimeDataDemo(ui.customPlot);
    setWindowTitle("Plot: "+demoName);

}

void Form::setupRealtimeDataDemo(QCustomPlot *customPlot)
{
#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)
  QMessageBox::critical(this, "", "You're using Qt < 4.7, the realtime data demo needs functions that are available with Qt 4.7 to work properly");
#endif
  demoName = "Real Time Data Demo";

  customPlot->addGraph(); // blue line
  customPlot->graph(0)->setPen(QPen(Qt::blue));
  customPlot->graph(0)->setBrush(QBrush(QColor(96, 227, 69)));
  customPlot->graph(0)->setAntialiasedFill(false);
  customPlot->addGraph(); // red line
  customPlot->graph(1)->setPen(QPen(Qt::red));
  customPlot->graph(0)->setChannelFillGraph(customPlot->graph(1));

  customPlot->addGraph(); // blue dot
  customPlot->graph(2)->setPen(QPen(Qt::blue));
  customPlot->graph(2)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(2)->setScatterStyle(QCPScatterStyle::ssDisc);
  customPlot->addGraph(); // red dot
  customPlot->graph(3)->setPen(QPen(Qt::red));
  customPlot->graph(3)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(3)->setScatterStyle(QCPScatterStyle::ssDisc);

  customPlot->xAxis->setTickLabelType(QCPAxis::ltDateTime);
  customPlot->xAxis->setDateTimeFormat("hh:mm:ss");
  customPlot->xAxis->setAutoTickStep(false);
  customPlot->xAxis->setTickStep(2);
  customPlot->axisRect()->setupFullAxesBox();

  // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
  connect(&dataTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
  dataTimer.start(0); // Interval 0 means to refresh as fast as possible
}



void Form::realtimeDataSlot()
{
  // calculate two new data points:
#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)
  double key = 0;
#else
  double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/500.0; //speed
#endif
  static double lastPointKey = 0;
  if (key-lastPointKey > 0.01) // at most add point every 10 ms
  {
    double value0 = qSin(key); //sin(key*1.6+cos(key*1.7)*2)*10 + sin(key*1.2+0.56)*20 + 26;
    double value1 = qCos(key); //sin(key*1.3+cos(key*1.2)*1.2)*7 + sin(key*0.9+0.26)*24 + 26;
    // add data to lines:
    ui.customPlot->graph(0)->addData(key, value0);
    ui.customPlot->graph(1)->addData(key, value1);
    // set data of dots:
    ui.customPlot->graph(2)->clearData();
    ui.customPlot->graph(2)->addData(key, value0);
    ui.customPlot->graph(3)->clearData();
    ui.customPlot->graph(3)->addData(key, value1);
    // remove data of lines that's outside visible range:
    ui.customPlot->graph(0)->removeDataBefore(key-8);
    ui.customPlot->graph(1)->removeDataBefore(key-8);
    // rescale value (vertical) axis to fit the current data:
    ui.customPlot->graph(0)->rescaleValueAxis();
    ui.customPlot->graph(1)->rescaleValueAxis(true);
    lastPointKey = key;
  }
  // make key axis range scroll with the data (at a constant range size of 8):
  ui.customPlot->xAxis->setRange(key+0.25, 8, Qt::AlignRight);
  ui.customPlot->replot();
}
