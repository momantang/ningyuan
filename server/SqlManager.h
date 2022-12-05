#pragma once

#include <QObject>
#include <QtSql>
#include "Entry.h"
const auto SONG_SQL = QLatin1String(R"(
	create table song(id INTEGER PRIMARY KEY, name varchar, singer varchar, duration integer);
)");
class SqlManager : public QObject
{
	Q_OBJECT
public:
	static SqlManager* Instance();


	//
	QList<NYUtil::Song> getSongs();
private:
	SqlManager(QObject* parent = nullptr);
	~SqlManager();
	QSqlDatabase db;
};
