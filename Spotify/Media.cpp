#include "Media.h"

std::ostream& operator<<(std::ostream& out, const Media& src) {
	out << src.artist << ": " << src.name << std::endl;
	return out;
}


