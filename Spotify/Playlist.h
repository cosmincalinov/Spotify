#pragma once
#include <iostream>
#include "Song.h"

class Playlist{
private:
	int numberOfSongs = 0;
	std::string name;
public:
	Playlist(std::string _name) : name(_name) { std::cout << "constr play"; }
	Playlist(const Playlist& src) { std::cout << "copy play"; name = src.name; numberOfSongs = src.numberOfSongs; }
	~Playlist() { std::cout << "destr play"; }

	Playlist& operator=(Playlist& src) {
		if (this != &src) {
			name = src.name;
			numberOfSongs = src.numberOfSongs;
		}
		return *this;
	}

	void shuffle();
};

void Playlist::shuffle() {

}
