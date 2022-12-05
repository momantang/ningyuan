#include "Player.h"

Player::Player(QObject* parent)
{
	mediaPlayer=new QMediaPlayer;
	audioOutput=new QAudioOutput;
	mediaPlayer->setAudioOutput(audioOutput);

	audioOutput->setVolume(50);

	connect(mediaPlayer,&QMediaPlayer::mediaStatusChanged,this,[this](QMediaPlayer::MediaStatus status)
	{
		if (status==QMediaPlayer::EndOfMedia)
		{
			if (loop&&action)
			{
				index++;
				if (index>=songs.size())
				{
					index=0;
				}
				this->play(index);
			}
		}
	});
}

Player::~Player()
{
}

void Player::play(NYUtil::Song song)
{
}

void Player::play(QList<NYUtil::Song> songss)
{
	songs=songss;
	qDebug()<<"play songs";
	if (songs.size()<=0)
	{
		qDebug()<<"no songs to play";
		return;
	}
	action=true;
	index=0;
	play(index);
}

void Player::play(int index)
{
	if (index!=-1)
	{
		this->index=index;
	}
	auto song=songs.at(index);
	auto path="C:/Users/momantang/Downloads/"+song.name;
	qDebug()<<"play "<<path;
	mediaPlayer->setSource(QUrl::fromLocalFile(path));
	mediaPlayer->play();
}
