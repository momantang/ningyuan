#pragma once
#include <QString>
namespace NYUtil {
	/// @brief 
	class Station
	{
	private:
		/* data */
	public:
		Station(/* args */);
		~Station();
	};


	class Song
	{
	public:
		Song();
		Song(QString n,QString s,int d);
		~Song();
	public:
		QString name = "a.mp3";
		QString singer = "unkonw";
		int duration = 0;
	private:

	};



}
