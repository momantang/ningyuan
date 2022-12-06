#pragma once
#include <qwidget.h>
#include <qpushbutton.h>
class NavigationWidget:public QWidget
{
	Q_OBJECT
public:
	explicit  NavigationWidget(QWidget *parent=nullptr);
	~NavigationWidget();
private:
	QPushButton *recordBtn=nullptr;
	QPushButton* songBtn=nullptr;
	QPushButton* userBtn=nullptr;
};
