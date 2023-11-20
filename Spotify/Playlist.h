#pragma once
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <vector>
#include "Song.h"
#include "EmptyPlaylist.h"

class Playlist{
protected:
	 std::vector<Song> currPlaylist;
	 static unsigned int numberOfSongs;
	 std::string name;
public:
	Playlist() { std::cout << "cPlay " << std::endl; }
	Playlist(std::string _name) : name(_name) { std::cout << "cpPlay " << std::endl; }
	Playlist(const Playlist& src) { std::cout << "ccPlay " << std::endl; name = src.name; numberOfSongs = src.numberOfSongs; }
	virtual ~Playlist() { std::cout << "~Play" << std::endl; }

	Playlist& operator=(Playlist& src) {
		if (this != &src) {
			name = src.name;
			numberOfSongs = src.numberOfSongs;
		}
		return *this;
	}

	virtual void play() {
		if (this->numberOfSongs == 0) {
			throw EmptyPlaylist();
		}
		else {
			for (Song s : currPlaylist) s.play();
		}
	}

	Playlist& operator+=(Song addedSong) {
		this->currPlaylist.push_back(addedSong);
		this->numberOfSongs++;
		return *this;
	}
};

