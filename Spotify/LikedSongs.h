#pragma once
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Playlist.h"

class LikedSongs : public Playlist{
private:
	/*static int numberOfSongs;
	std::string name = "Liked Songs";*/

	LikedSongs() : Playlist() {}
	~LikedSongs() {}

public:
	static LikedSongs& getInstance() {
		static LikedSongs* s_instance = new LikedSongs();
		return *s_instance;
	}

	void play() override {
		if (this->numberOfSongs == 0) {
			throw EmptyPlaylist();
		}
		else {
			currPlaylist[rand() % numberOfSongs].play();
		}
	}
};

//int LikedSongs::numberOfSongs = 0;


