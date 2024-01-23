#include <program/console.h>

void cmd::clear() {
#ifdef _WIN32
	std::system("cls");
#else
	std::system("clear");
#endif
}

void cmd::pause() {
#ifdef _WIN32
	std::system("pause");
#else
	std::system("echo Press any key to continue...");
	std::system("read spkset");
#endif
}

void cmd::newline() {
	std::cout << '\n';
}

void cmd::fbuffer() {
	std::cout << std::endl;
}