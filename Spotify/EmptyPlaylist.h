#pragma once
#include <iostream>
#include <exception>

class EmptyPlaylist : public std::exception{
public:

	const char* what() const noexcept override {
		return "No songs in this playlist!";
	}

};

