#include "Media.h"

static std::ostream& operator<<(std::ostream& out, const Media& src) {
	out << src.name << std::endl;
	out << src.artist << std::endl;
	return out;
}


