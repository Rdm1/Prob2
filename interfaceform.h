#ifndef INTERFACEFORM_H
#define INTERFACEFORM_H


#include <QMainWindow>
#include <QTimer>
#include "qcustomplot.h" // the header file of QCustomPlot. Don't forget to add it to your project, if you use an IDE, so it gets compiled.

#include <QWidget>
#include <QPushButton>
#include "ui_Interface_Form.h"

/*
namespace Ui {
class MainWindow;
}
*/

class Form :public QWidget {
    Q_OBJECT
public :
     Form (QWidget* wgt = 0);
    void setupRealtimeDataDemo(QCustomPlot *customPlot);



private slots:
  void realtimeDataSlot();

   private :
    Ui::Form ui;
    QString demoName;
    QTimer dataTimer;

public slots :
 void graph_on();
 void graph_off();
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


