#include "NavigationWidget.h"
#include <QHBoxLayout>
NavigationWidget::NavigationWidget(QWidget* parent)
{
	auto layout=new QHBoxLayout(this);
	recordBtn=new QPushButton(tr("Record"));
	songBtn=new QPushButton(tr("Song"));
	userBtn=new QPushButton(tr("Me"));
	layout->addWidget(songBtn);
	layout->addWidget(recordBtn);
	layout->addWidget(userBtn);
}

NavigationWidget::~NavigationWidget()
{
}
