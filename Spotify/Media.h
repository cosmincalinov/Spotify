#pragma once
#include<iostream>
#include<string>

class Media{
protected:
	std::string name;
	std::string artist;
	const int duration = 0;
public:
	Media(int _duration) : duration(_duration) { std::cout << "constr media" << std::endl; }
	Media(const Media& src) { std::cout << "copy media" << std::endl; artist = src.artist; }
	~Media() { std::cout << "destr media" << std::endl; }
	Media& operator=(Media& alt_obj) {
		if (this != &alt_obj) {
			artist = alt_obj.artist;
		}
		return *this;
	}
	virtual void play() = 0;
	virtual void pause() = 0;
	virtual void addToQueue() = 0;
	virtual void displayTime() = 0;
};

