#pragma once
#include<iostream>
#include<queue>
#include<windows.h>
#include "Song.h"
#include "EmptyPlaylist.h"

class MyQueue{
private:
	std::queue<Song> currQueue;
	static int numberOfSongsInQueue;

	MyQueue() {}
	~MyQueue() {}
public:
	
	static MyQueue& getInstance() {
		static MyQueue* s_instance = new MyQueue();
		return *s_instance;
	}

	MyQueue& operator+=(Song addedSong) {
		this->currQueue.emplace(addedSong);
		numberOfSongsInQueue++;
		return *this;
	}

	void play() {
		if (this->numberOfSongsInQueue == 0) throw EmptyPlaylist();
		for (int i = 0; i < numberOfSongsInQueue; i++) {
			this->currQueue.front().play();
			Sleep(2);
			this->currQueue.pop();
		}
	}

};

