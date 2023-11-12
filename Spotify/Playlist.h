#pragma once
#include <iostream>
#include "Song.h"

class Playlist{
private:
	int numberOfSongs = 0;
	std::string name;
public:
	Playlist() { std::cout << "constr play" << std::endl; }
	Playlist(std::string _name) : name(_name) { std::cout << "constr param play" << std::endl; }
	Playlist(const Playlist& src) { std::cout << "copy play" << std::endl; name = src.name; numberOfSongs = src.numberOfSongs; }
	~Playlist() { std::cout << "destr play" << std::endl; }

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
