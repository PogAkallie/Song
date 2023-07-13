#pragma once
#include <string>
using namespace std;

class Song
{
private:
	string artist;
	string albumId;
	unsigned int placeInTheAlbum;
	int ranking;

public:
	Song(string artist, string albumId, unsigned int placeInTheAlbum, int ranking);

	void setArtist(string artist);
	void setAlbumId(string albumId);
	void setPlaceInTheAlbum(unsigned int placeInTheAlbum);
	void setRanking(int ranking);

	string getArtist() const;
	string getAlbumid() const;
	unsigned int getPlaceInTheAlbum() const;
	int getRanking() const;
};
