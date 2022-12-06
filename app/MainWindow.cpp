#include "MainWindow.h"
#include <qboxlayout.h>
MainWindow::MainWindow(QWidget *parent):QMainWindow(parent){
    nav=new NavigationWidget;
    auto content=new QWidget;
    this->setCentralWidget(content);
    auto layout=new QVBoxLayout(content);
    layout->addWidget(nav);
    this->setFixedSize(width,height);
}
MainWindow::~MainWindow(){
    
}