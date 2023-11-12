#pragma once
#include "Playlist.h"
#include "Song.h"

class LikedSongs : public Playlist{
private:
	int numberOfSongs = 0;
	std::string name = "Liked Songs";
public:
	void shuffle();

	LikedSongs(std::string _name) : Playlist(_name) { std::cout << "constr liked"; }
	LikedSongs(const LikedSongs& src) : Playlist(src) { std::cout << "copy liked"; name = src.name; numberOfSongs = src.numberOfSongs; }
	~LikedSongs() { std::cout << "destr liked"; }

	LikedSongs& operator=(LikedSongs& src) {
		if (this != &src) {
			numberOfSongs = src.numberOfSongs;
		}
		return *this;
	}
};

void LikedSongs::shuffle() {

}

