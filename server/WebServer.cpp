#include "WebServer.h"

WebServer::WebServer(QObject* parent): QObject(parent)
{
	sm=SongManager::Instance();
	player=new Player(this);
	this->route();
}

WebServer::~WebServer()
{
}

void WebServer::route()
{
	qDebug()<<"route";
	server.route("/",[this](){
		return "home page";});


	server.route("/play/songs",[this]()
	{
		player->play(sm->getLocalSong());
		return "play songs";
	});
	server.listen(QHostAddress::Any,8080);
}
