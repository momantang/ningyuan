#pragma once
#include <qmainwindow.h>
#include <qstackedwidget.h>
#include "NavigationWidget.h"
class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	explicit MainWindow(QWidget* parent = nullptr);
	~MainWindow();

private:
	NavigationWidget* nav = nullptr;
	QStackedWidget* stackedWidget = nullptr;
	int width = 600;
	int height = 800;
};
