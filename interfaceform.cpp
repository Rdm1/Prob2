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

    connect(ui.pushButton_Graph_on,SIGNAL(clicked()),this,SLOT(graph_on()));
    connect(ui.pushButton_Graph_off,SIGNAL(clicked()),this,SLOT(graph_off()));

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
        ui.stackedWidget_settings->setShown(true);

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
    ui.stackedWidget_settings->setHidden(true);

    ui.customPlot->setShown(true);
    setupRealtimeDataDemo(ui.customPlot); //REALTIME sin
    //setupStyledDemo(ui.customPlot);     //STATICK

    setWindowTitle("Plot: "+demoName);
}

void Form ::graph_off(){ //slot
    ui.customPlot->setHidden(true);

    ui.stackedWidget->setShown(true);
    ui.stackedWidget_settings->setShown(true);

    setWindowTitle("RDM-11");
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


  QLinearGradient plotGradient;
  plotGradient.setStart(0, 0);
  plotGradient.setFinalStop(0, 350);
  plotGradient.setColorAt(0, QColor(80, 8, 80));
  plotGradient.setColorAt(1, QColor(50, 50, 50));
  customPlot->setBackground(plotGradient);
  QLinearGradient axisRectGradient;
  axisRectGradient.setStart(0, 0);
  axisRectGradient.setFinalStop(0, 350);
  axisRectGradient.setColorAt(0, QColor(80, 80, 80));
  axisRectGradient.setColorAt(1, QColor(30, 100, 0));
  customPlot->axisRect()->setBackground(axisRectGradient);

  // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
 connect(&dataTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
  dataTimer.start(100); // Interval 0 means to refresh as fast as possible
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



void Form::setupStyledDemo(QCustomPlot *customPlot)
{
  demoName = "Style Demo";

  // prepare data:
  QVector<double> x1(20), y1(20);
  QVector<double> x2(100), y2(100);
  QVector<double> x3(20), y3(20);
  QVector<double> x4(20), y4(20);

/*
  // add the text label at the top:
  QCPItemText *textLabel = new QCPItemText(customPlot);
  customPlot->addItem(textLabel);
  textLabel->setPositionAlignment(Qt::AlignTop|Qt::AlignHCenter);
  textLabel->position->setType(QCPItemPosition::ptAxisRectRatio);
  textLabel->position->setCoords(0.5, 0); // place position at center/top of axis rect
  textLabel->setText("Text Item Demo");
  textLabel->setFont(QFont(font().family(), 16)); // make font a bit larger
  textLabel->setPen(QPen(Qt::black)); // show black border around text

  // add the arrow:
  QCPItemLine *arrow = new QCPItemLine(customPlot);
  customPlot->addItem(arrow);
  arrow->start->setParentAnchor(textLabel->bottom);
  arrow->end->setCoords(4, 1.6); // point to (4, 1.6) in x-y-plot coordinates
  arrow->setHead(QCPLineEnding::esSpikeArrow);
*/

  for (int i=0; i<x1.size(); ++i)
  {
    x1[i] = i/(double)x1.size()*10;
    y1[i] = qCos(x1[i]*0.8+qSin(x1[i]*0.16+1.0))*qSin(x1[i]*0.54)+1.4;
  }
  for (int i=0; i<x2.size(); ++i)
  {
    x2[i] = i/(double)x2.size()*10;
    y2[i] = qCos(x2[i]*0.85+qSin(x2[i]*0.165+1.1))*qSin(x2[i]*0.50)+1.7;
  }

  for (int i=0; i<x3.size(); ++i)
  {
    x3[i] = i/(double)x3.size()*10;
    y3[i] = 0.05+3*(0.5+qCos(x3[i]*x3[i]*0.2+2)*0.5)/(double)(x3[i]+0.7)+qrand()/(double)RAND_MAX*0.01;
  }

  // create and configure plottables:
  QCPGraph *graph1 = customPlot->addGraph();
  graph1->setData(x1, y1);
  graph1->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, QPen(Qt::black, 1.5), QBrush(Qt::white), 9));
  graph1->setPen(QPen(QColor(120, 120, 120), 2));

  QCPGraph *graph2 = customPlot->addGraph();
  graph2->setData(x2, y2);
  graph2->setPen(Qt::NoPen);
  graph2->setBrush(QColor(200, 200, 200, 20));
  //graph2->setChannelFillGraph(graph1);


  QCPBars *bars1 = new QCPBars(customPlot->xAxis, customPlot->yAxis);
  customPlot->addPlottable(bars1);
  bars1->setWidth(9/(double)x3.size());
  bars1->setData(x3, y3);
  bars1->setPen(Qt::NoPen);
  bars1->setBrush(QColor(10, 140, 70, 160));

  // set some pens, brushes and backgrounds:
  customPlot->xAxis->setBasePen(QPen(Qt::white, 1));
  customPlot->yAxis->setBasePen(QPen(Qt::white, 1));
  customPlot->xAxis->setTickPen(QPen(Qt::white, 1));
  customPlot->yAxis->setTickPen(QPen(Qt::white, 1));
  customPlot->xAxis->setSubTickPen(QPen(Qt::white, 1));
  customPlot->yAxis->setSubTickPen(QPen(Qt::white, 1));
  customPlot->xAxis->setTickLabelColor(Qt::white);
  customPlot->yAxis->setTickLabelColor(Qt::white);
  customPlot->xAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
  customPlot->yAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
  customPlot->xAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
  customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
  customPlot->xAxis->grid()->setSubGridVisible(true);
  customPlot->yAxis->grid()->setSubGridVisible(true);
  customPlot->xAxis->grid()->setZeroLinePen(Qt::NoPen);
  customPlot->yAxis->grid()->setZeroLinePen(Qt::NoPen);
  customPlot->xAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);
  customPlot->yAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);

  QLinearGradient plotGradient;
  plotGradient.setStart(0, 0);
  plotGradient.setFinalStop(0, 350);
  plotGradient.setColorAt(0, QColor(80, 8, 80));
  plotGradient.setColorAt(1, QColor(50, 50, 50));
  customPlot->setBackground(plotGradient);
  QLinearGradient axisRectGradient;
  axisRectGradient.setStart(0, 0);
  axisRectGradient.setFinalStop(0, 350);
  axisRectGradient.setColorAt(0, QColor(80, 80, 80));
  axisRectGradient.setColorAt(1, QColor(30, 100, 0));
  customPlot->axisRect()->setBackground(axisRectGradient);

  customPlot->rescaleAxes();
  customPlot->yAxis->setRange(0, 2);
}

/*
void Form::setupStyledDemo(QCustomPlot *customPlot) //void MainWindow::setupSimpleItemDemo(QCustomPlot *customPlot)
{
  demoName = "Simple Item Demo";
  customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

  // add the text label at the top:
  QCPItemText *textLabel = new QCPItemText(customPlot);
  customPlot->addItem(textLabel);
  textLabel->setPositionAlignment(Qt::AlignTop|Qt::AlignHCenter);
  textLabel->position->setType(QCPItemPosition::ptAxisRectRatio);
  textLabel->position->setCoords(0.5, 0); // place position at center/top of axis rect
  textLabel->setText("Text Item Demo");
  textLabel->setFont(QFont(font().family(), 16)); // make font a bit larger
  textLabel->setPen(QPen(Qt::black)); // show black border around text

  // add the arrow:
  QCPItemLine *arrow = new QCPItemLine(customPlot);
  customPlot->addItem(arrow);
  arrow->start->setParentAnchor(textLabel->bottom);
  arrow->end->setCoords(4, 1.6); // point to (4, 1.6) in x-y-plot coordinates
  arrow->setHead(QCPLineEnding::esSpikeArrow);
}
*/
