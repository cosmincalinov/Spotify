#pragma once
#include <iostream>
#include "Media.h"

class Song : public Media{
private:

public:
	Song(std::string _name, std::string _artist, int _duration = 0) : Media(_name,_artist,_duration) { std::cout << "cSong "; }
	Song(const Song& src) : Media(src) { std::cout << "ccSong "; artist = src.artist; }
	~Song() { std::cout << "~Song "; }

	Song& operator=(Song& alt_obj) {
		if (this != &alt_obj) {
			artist = alt_obj.artist;
		}
		return *this;
	}

	void play() override{
		std::cout << "Song: " << this->name << " by " << this->artist << " is playing. " << std::endl;
	}

	void addToQueue() override {
	
	}

	void like() {
	
	}
};


