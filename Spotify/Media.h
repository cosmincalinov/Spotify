#pragma once
#include<iostream>

class Media{
protected:
	std::string name;
	std::string artist;
public:
	Media(std::string _name, std::string _artist) : name(_name),artist(_artist){}
	Media(const Media& src) { artist = src.artist; }
	virtual ~Media() {}
	Media& operator=(Media& alt_obj) {
		if (this != &alt_obj) {
			artist = alt_obj.artist;
		}
		return *this;
	}

	friend std::ostream& operator<<(std::ostream& out, const Media& src);

	virtual void play() = 0;
	virtual void addToQueue() = 0;
};

