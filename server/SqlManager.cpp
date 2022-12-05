#include "SqlManager.h"
#include <QSqlQuery>
SqlManager* SqlManager::Instance()
{
	static SqlManager sm;
	return &sm;
}



QList<NYUtil::Song> SqlManager::getSongs()
{
	QList<NYUtil::Song> rs;
	QSqlQuery query("select * from songs");
	while (query.next())
	{
		auto record = query.record();
		QString name = record.value(1).toString();
		QString singer = record.value(2).toString();
		int duration = record.value(3).toInt();

		rs.append(NYUtil::Song(name, singer, duration));


	}
	return rs;
}

SqlManager::SqlManager(QObject* parent)
	: QObject(parent)
{
	db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("server.db");
	if (!db.open())
	{
		qDebug() << "unable open db server.db " << db.lastError().text();
	}
	else {
		qDebug() << " open db server.db ok";
	}
	QStringList tables = db.tables();
	QSqlQuery query;
	if (!tables.contains("song", Qt::CaseInsensitive))
	{
		//create table song
		query.exec(SONG_SQL);

	}
}

SqlManager::~SqlManager()
{
}
