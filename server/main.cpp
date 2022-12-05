#include <iostream>
#include <qcoreapplication.h>
#include "WebServer.h"
int main(int argc, char** argv) {
	QCoreApplication app(argc,argv);
	std::cout << " server start " << std::endl;
	WebServer webServer;
	app.exec();
}