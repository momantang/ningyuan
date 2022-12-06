#include <iostream>
#include <QApplication>
#include "MainWindow.h"
int main(int argc,char **argv){
    QApplication app(argc,argv);
    MainWindow w;
    std::cout<<" I am app";
    w.show();
    app.exec();
}