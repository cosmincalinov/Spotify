#include "Podcast.h"

std::ostream& operator<<(std::ostream& out, const Podcast& src) {
	out << src.name << std::endl;
	out << src.artist << std::endl;
	return out;
}