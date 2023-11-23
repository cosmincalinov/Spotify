#include "Playlist.h"

unsigned int Playlist::numberOfSongs = 0;

std::ostream& operator<<(std::ostream& out, Playlist src) {
	std::cout << src.name << std::endl;
	return out;
}