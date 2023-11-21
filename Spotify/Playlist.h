#pragma once
#include <iostream>
#include <vector>
#include "Song.h"
#include "EmptyPlaylist.h"

class Playlist{
protected:
	 std::vector<Song> currPlaylist;
	 static unsigned int numberOfSongs;
	 std::string name;
public:
	Playlist() {}
	Playlist(std::string _name) : name(_name) {}
	Playlist(const Playlist& src) {name = src.name; numberOfSongs = src.numberOfSongs; }
	virtual ~Playlist() {}

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

