#pragma once
#include <iostream>
#include "Playlist.h"

template <typename T>
class Defaults{
private:
	std::vector<T> def;
public:
	template <typename D>
	void show() {
		for (int i = 0; i < def.size(); i++) {
			std::cout << i + 1 << "." << def[i] << std::endl;
		}
	}
	
	template<>
	void show<char>() {
		for (int i = 0; i < def.size(); i++) {
			std::cout << (char)(i + 141) << "." << def[i] << std::endl;
		}
	}

};
