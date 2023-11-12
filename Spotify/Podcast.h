#pragma once
#include <iostream>
#include "Media.h"

class Podcast : public Media{
private:
	
public:
	Podcast(int _duration) : Media(_duration) { std::cout << "constr pod" << std::endl; }
	Podcast(const Podcast& src) : Media(src) { std::cout << "copy pod" << std::endl; artist = src.artist; }
	~Podcast() { std::cout << "destr pod" << std::endl; }

	Podcast& operator=(Podcast& alt_obj) {
		if (this != &alt_obj) {
			artist = alt_obj.artist;
		}
		return *this;
	}

	void play() {};
	void pause() {};
	void addToQueue() {};
	void skip15() {};
	void goBack15() {};
};


