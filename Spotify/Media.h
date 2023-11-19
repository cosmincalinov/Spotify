#pragma once
#include<iostream>
#include<string>

class Media{
protected:
	std::string name = "default";
	std::string artist;
	const int duration = 0;
public:
	Media(std::string _name, std::string _artist, int _duration = 0) : name(_name),artist(_artist),duration(_duration) { std::cout << "c media "; }
	Media(const Media& src) { std::cout << "cc media " << std::endl; artist = src.artist; }
	virtual ~Media() { std::cout << "~media"; }
	Media& operator=(Media& alt_obj) {
		if (this != &alt_obj) {
			artist = alt_obj.artist;
		}
		return *this;
	}
	virtual void play() = 0;
	virtual void addToQueue() = 0;
};

