#include "Song.h"
#include <string>
#include <iostream>
using namespace std;

Song::Song(string artist, string albumId, unsigned int placeInTheAlbum, int ranking)
{
	setArtist(artist);
	setAlbumId(albumId);
	setPlaceInTheAlbum(placeInTheAlbum);
	setRanking(ranking);
}

void Song::setArtist(string artist)
{
	this->artist = artist;
}

void Song::setAlbumId(string albumId)
{
	if (albumId.length() != 7)
	{
		cerr << "Error" << endl;
		return;
	}

	int symbolsCount = 0, lettersCount = 0;

	for (char ch : albumId)
	{
		if (ch >= 65 && ch <= 90)
			lettersCount++;
		else if (ch >= 0 && ch <= 47 && ch >= 58 && ch <= 64 && ch >= 91 && ch <= 96 && ch >= 123)
			symbolsCount++;
	}

	if (symbolsCount > 0 || lettersCount <= 3)
	{
		cerr << "ERROR" << endl;
		return;
	}

	this->albumId = albumId;
}

void Song::setPlaceInTheAlbum(unsigned int placeInTheAlbum)
{
	if (placeInTheAlbum <= 0)
	{
		cerr << "Error" << endl;
		return;
	}
	this->placeInTheAlbum = placeInTheAlbum;
}

void Song::setRanking(int ranking)
{
	if (ranking < 1 || ranking >100)
	{
		cerr << "Error" << endl;
		return;
	}
	this->ranking = ranking;
}

string Song::getArtist() const
{
	return artist;
}

string Song::getAlbumid() const
{
	return albumId;
}

unsigned int Song::getPlaceInTheAlbum() const
{
	return placeInTheAlbum;
}

int Song::getRanking() const
{
	return ranking;
}

