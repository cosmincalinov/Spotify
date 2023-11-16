#pragma once
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <vector>
#include "Song.h"
#include "EmptyPlaylist.h"

class Playlist{
private:
	std::vector<Song> currPlaylist;
protected:
	 static unsigned int numberOfSongs;
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

	void shuffle() {
		if (this->numberOfSongs == 0) {
			std::cout << "Cannot find any songs in this playlist";//error class here
		}
		else {
			currPlaylist[rand() % numberOfSongs].play();
		}
	}
};

