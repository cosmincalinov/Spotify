#pragma once
#include "Playlist.h"
#include "Song.h"

class LikedSongs : public Playlist{
private:
	int numberOfSongs = 0;
public:
	void shuffle();

};

void LikedSongs::shuffle() {

}

