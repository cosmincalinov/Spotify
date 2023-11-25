#pragma once
#include<iostream>
#include<queue>
#include "Song.h"
#include "EmptyPlaylist.h"

class MyQueue{
private:
	std::queue<Media*> currQueue;
	static int numberOfSongsInQueue;

	MyQueue() {}
	~MyQueue() {}
public:
	
	static MyQueue& getInstance() {
		static MyQueue* s_instance = new MyQueue();
		return *s_instance;
	}

	MyQueue& operator+=(Media* addedMedia) {
		this->currQueue.emplace(addedMedia);
		numberOfSongsInQueue++;
		return *this;
	}

	void playQueue() {
		if (this->numberOfSongsInQueue == 0) throw EmptyPlaylist();
		int nbSongsCache = numberOfSongsInQueue;
		for (int i = 0; i < nbSongsCache; i++) {
			currQueue.front()->play();
			this->currQueue.pop();
			numberOfSongsInQueue--;
		}
	}

};

