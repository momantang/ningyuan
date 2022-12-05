#include "SongManager.h"
#include "Entry.h"
using NYUtil::Song;
SongManager* SongManager::Instance()
{
	static SongManager sm;
	return &sm;
}

QList<NYUtil::Song> SongManager::getSongs()
{
	return  sqlManager->Instance()->getSongs();
	//return QList<NYUtil::Song>();
}

QList<NYUtil::Song> SongManager::getLocalSong()
{
	QList<NYUtil::Song> rs;
	auto list=QDir(path).entryList(QDir::Files);
	for (auto  str: list)
	{
		if (str.endsWith(".mp3"))
		{
			qDebug()<<" add song "<<str;
			rs.append(NYUtil::Song(str,"unkown",0));
		}
	}
	return rs;
}

void SongManager::updateSongFromLocal()
{
	QDir dir(path);

	auto list = dir.entryList(QDir::Files);
	QStringList rs;
	foreach(auto str, list) {
		if (str.endsWith(".mp3"))
		{
			rs.append(str.left(str.length() - 4));
		}
	}
	foreach(auto song, rs) {
		qDebug() << song;
	}
	sqlManager = SqlManager::Instance();

}
SongManager::SongManager(QObject* parent) :QObject(parent) {
	this->updateSongFromLocal();
}
SongManager::~SongManager()
{
}
