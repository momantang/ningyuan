#pragma once
#include <QDir>
#include <QtSql>
#include "SqlManager.h"
#include "Entry.h"
class SongManager:public QObject
{
	Q_OBJECT

public:
	static SongManager* Instance();

	QList<NYUtil::Song> getSongs();
	QList<NYUtil::Song> getLocalSong();
	void updateSongFromLocal();
	
private:
#ifdef linux
	QString path="/home/pi/Music/"
#else
	QString path="C:/Users/momantang/Downloads/";
#endif // 


private:
	explicit SongManager(QObject *parent=nullptr);
	~SongManager();
private:
	SqlManager* sqlManager=nullptr;
};
