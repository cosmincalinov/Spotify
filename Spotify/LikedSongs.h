#pragma once
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Playlist.h"

class LikedSongs : public Playlist{
private:
	static unsigned int numberOfLiked;

	LikedSongs() : Playlist("Liked Songs") {}
	~LikedSongs() {}

public:
	static LikedSongs& getInstance() {
		static LikedSongs* s_instance = new LikedSongs();
		return *s_instance;
	}

	void play() override {
		//fix this
		if (this->numberOfLiked == 0) {
			throw EmptyPlaylist();
		}
		else {
			currPlaylist[rand() % numberOfLiked].play();
		}
	}

	LikedSongs& operator+=(Song fav){
		this->currPlaylist.push_back(fav);
		this->numberOfLiked++;
		return *this;
	}
};



