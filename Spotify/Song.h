#pragma once
#include <iostream>
#include "Media.h"

class Song : public Media{
private:

public:
	Song(int _duration) : Media(_duration) { std::cout << "constr song" << std::endl; }
	Song(const Song& src) : Media(src) { std::cout << "copy song" << std::endl; artist = src.artist; }
	~Song() { std::cout << "destr song" << std::endl; }

	Song& operator=(Song& alt_obj) {
		if (this != &alt_obj) {
			artist = alt_obj.artist;
		}
		return *this;
	}

	void play() override {};
	void pause() override {};
	void addToQueue() override {};
	void like() {};
};


