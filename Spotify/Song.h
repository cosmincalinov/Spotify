#pragma once
#include <iostream>
#include "Media.h"

class Song : public Media{
private:

public:
	Song(std::string _name, std::string _artist) : Media(_name,_artist) {}
	Song(const Song& src) : Media(src) { artist = src.artist; }
	~Song() {}

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

	friend std::ostream& operator<<(std::ostream& out,const Song& src);
};


