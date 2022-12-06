#include "SongWidget.h"
#include <qlayout.h>
SongWidget::SongWidget(QWidget* parent):QWidget(parent)
{
	auto layout = new QVBoxLayout(this);

	statusLabel=new QLabel(tr(""))
}

SongWidget::~SongWidget()
{
}
