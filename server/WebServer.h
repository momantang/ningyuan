#pragma once
#include <QtHttpServer>

#include "SongManager.h"
#include "Player.h"
class WebServer:public QObject
{
	Q_OBJECT

public:
	explicit WebServer(QObject *parent=nullptr);
	~WebServer();
private:
	void route();
private:
	QHttpServer server;
	SongManager *sm=nullptr;
	Player*player=nullptr;
};
