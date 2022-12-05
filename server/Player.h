#pragma once
#include <qmediaplayer.h>
#include <qaudiooutput.h>
#include "Entry.h"
class Player :public QObject
{
public:
	explicit Player(QObject* parent = nullptr);
	~Player();

	void play(NYUtil::Song song);
	void play(QList<NYUtil::Song> songs);
	void play(int index=-1);
private:
	bool loop = true;
	bool action=false;
	int index=0;
	QMediaPlayer* mediaPlayer = nullptr;
	QAudioOutput* audioOutput = nullptr;
	QList<NYUtil::Song> songs;
};
