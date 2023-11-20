#pragma once
#include<iostream>
#include<string>

class Media{
protected:
	std::string name;
	std::string artist;
public:
	Media(std::string _name, std::string _artist) : name(_name),artist(_artist){ std::cout << "cMedia "; }
	Media(const Media& src) { std::cout << "ccMedia " << std::endl; artist = src.artist; }
	virtual ~Media() { std::cout << "~Media"; }
	Media& operator=(Media& alt_obj) {
		if (this != &alt_obj) {
			artist = alt_obj.artist;
		}
		return *this;
	}
	virtual void play() = 0;
	virtual void addToQueue() = 0;
};

