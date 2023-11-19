#pragma once
#include <iostream>
#include "Media.h"

class Podcast : public Media{
private:
	
public:
	Podcast(std::string _name, std::string _artist,int _duration = 0) : Media(_name,_artist,_duration) { std::cout << "cPod "; }
	Podcast(const Podcast& src) : Media(src) { std::cout << "ccPod "; artist = src.artist; }
	~Podcast() { std::cout << "~Pod"; }

	Podcast& operator=(Podcast& alt_obj) {
		if (this != &alt_obj) {
			artist = alt_obj.artist;
		}
		return *this;
	}

	void play() override {
		std::cout << "Podcast: " << this->name << " by " << this->artist << " is playing." << std::endl;

	}
	void addToQueue() override {}


};


