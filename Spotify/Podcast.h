#pragma once
#include <iostream>
#include "Media.h"

class Podcast : public Media{
private:
	int duration;
public:
	void play();
	void pause();
	void addToQueue();
	void skip15();
	void goBack15();
};

void Podcast::play() {

}

void Podcast::pause() {

}

void Podcast::addToQueue() {

}

void Podcast::skip15() {

}

void Podcast::goBack15() {

}

