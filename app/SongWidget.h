#pragma once
#include <qwidget.h>
#include <qlabel.h>
#include <qtablewidget.h>
#include "Entry.h"
class SongWidget :public QWidget
{
	Q_OBJECT
public:
	explicit SongWidget(QWidget* parent = nullptr);
	~SongWidget();
private:
	QLabel* statusLabel = nullptr;
	QTableWidget* table = nullptr;
};
