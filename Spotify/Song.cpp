#include "Song.h"

std::ostream& operator<<(std::ostream& out,const Song& src) {
	out << src.name << std::endl;
	out << src.artist << std::endl;
	return out;
}