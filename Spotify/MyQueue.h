#pragma once
#include<iostream>
#include<queue>
#include "Song.h"

class MyQueue{
private:
	std::queue<Song> currQueue;
public:
	MyQueue(){}
	~MyQueue(){}

	MyQueue& operator+=(Song addedSong) {
		this->currQueue.emplace(addedSong);
		return *this;
	}
};

