#include "NavWidget.h"
#include <QVBoxLayout>
NavWidget::NavWidget(QWidget *parent):QWidget(parent)
{
	auto layout=QVBoxLayout(this);


	recordBtn=new QPushButton(tr("Record"));
	songBtn=new QPushButton(tr("Song"));
	controlBtn=new QPushButton(tr("Control"));
	meBtn=new QPushButton(tr("Me"));

	layout.addWidget(recordBtn);
	layout.addWidget(songBtn);
	layout.addWidget(controlBtn);
	layout.addWidget(meBtn);


}

NavWidget::~NavWidget()
{
}