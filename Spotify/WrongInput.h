#pragma once
#include <iostream>
#include <exception>

class WrongInput : public std::exception{
public:

	const char* what() const noexcept override {
		return "Wrong input!\n";
	}
};

