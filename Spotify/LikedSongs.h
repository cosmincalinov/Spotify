#pragma once
#include <iostream>
#include "Playlist.h"

class LikedSongs : public Playlist{
private:
	/*static int numberOfSongs;
	std::string name = "Liked Songs";*/

	LikedSongs() : Playlist() { std::cout << "constr liked" <<std::endl; }
	~LikedSongs() { std::cout << "destr liked" << std::endl; }

public:
	void shuffle() {}

	static LikedSongs& getInstance() {
		static LikedSongs* s_instance = new LikedSongs();
		return *s_instance;
	}
};

//int LikedSongs::numberOfSongs = 0;


