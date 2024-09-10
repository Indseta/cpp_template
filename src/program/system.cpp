#include <program/system.h>

#include <iostream>

void System::clear() {
#ifdef _WIN32
	std::system("cls");
#else
	std::system("clear");
#endif
}

void System::pause() {
#ifdef _WIN32
	std::system("pause");
#else
	std::system("echo Press any key to continue...");
	std::system("read spkset");
#endif
}