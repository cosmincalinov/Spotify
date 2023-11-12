#pragma once
#include "Playlist.h"
#include "Song.h"

class LikedSongs : public Playlist{
private:
	static int numberOfSongs;
	std::string name = "Liked Songs";

	LikedSongs() : Playlist() { std::cout << "constr liked" <<std::endl; }
	LikedSongs(const LikedSongs& src) : Playlist(src) { std::cout << "copy liked" << std::endl; name = src.name; numberOfSongs = src.numberOfSongs; }
	~LikedSongs() { std::cout << "destr liked" << std::endl; }

	LikedSongs& operator=(LikedSongs& src) {
		if (this != &src) {
			numberOfSongs = src.numberOfSongs;
		}
		return *this;
	}
public:
	void shuffle();

	static LikedSongs& getInstance() {
		static LikedSongs* s_instance = new LikedSongs();
	}
};

int LikedSongs::numberOfSongs = 0;

void LikedSongs::shuffle() {

}

