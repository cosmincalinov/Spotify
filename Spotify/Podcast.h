#pragma once
#include <iostream>
#include<windows.h>
#include "Media.h"

class Podcast : public Media{
private:
	
public:
	Podcast(int _duration = 0) : Media(_duration) { std::cout << "constr pod" << std::endl; }
	Podcast(const Podcast& src) : Media(src) { std::cout << "copy pod" << std::endl; artist = src.artist; }
	~Podcast() { std::cout << "destr pod" << std::endl; }

	Podcast& operator=(Podcast& alt_obj) {
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
		std::cout << "Podcast: " << this->name << " by " << this->artist << " is playing. " << std::endl;

	};
	//bool pause() override { return true; };
	void addToQueue() override {};
	void skip15() {};
	void goBack15() {};
};


