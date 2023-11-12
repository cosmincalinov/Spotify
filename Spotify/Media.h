#pragma once
#include<iostream>

class Media{
private:
	int duration;
public:
	virtual void play() = 0;
	virtual void pause() = 0;
	virtual void addToQueue() = 0;
};

