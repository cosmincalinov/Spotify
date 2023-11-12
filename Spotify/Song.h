#pragma once
#include <iostream>
#include "Media.h"

class Song : public Media{
private:
	int duration;
public:
	void play();
	void pause();
	void addToQueue();
	void like();
};

void Song::play() {

}

void Song::pause() {

}

void Song::addToQueue() {

}

void Song::like() {

}

