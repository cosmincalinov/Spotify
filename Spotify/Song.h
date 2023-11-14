#pragma once
#include <iostream>
#include<windows.h>
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

	void displayTime()
	{
		int min = 0, sec = 0;
		while (true)
		{

			Sleep(1000);
			system("cls");
			std::cout << "\t\t\t" << min << ":" << sec << std::endl;
			sec++;
			if (sec == 60)
			{
				sec = 0;
				min++;
			}
		}
	}

	void play() override {
		std::cout << "Song: " << this->name << " by " << this->artist << " is playing. " << std::endl;
	}

	void pause() override {
	
	}

	void addToQueue() override {
	
	}

	void like() {
	
	}
};


