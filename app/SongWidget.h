#pragma once
#include <qwidget.h>
#include <qlabel.h>
#include <qtablewidget.h>
class SongWidget :public QWidget
{
	Q_OBJECT
public:
private:
	QLabel* statusLabel = nullptr;
	QTableWidget *table=nullptr;
};
