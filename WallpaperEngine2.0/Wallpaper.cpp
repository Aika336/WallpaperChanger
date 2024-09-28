#include "Wallpaper.h"

Wallpaper::Wallpaper() {
	HWND hwnd;
	hwnd = GetConsoleWindow();
	ShowWindow(hwnd, 0);
}

bool Wallpaper::setWallpaper(std::string file)
{
    char buf[256];
	GetCurrentDirectoryA(256, buf);
	std::wstring widestr = std::wstring(file.begin(), file.end());
	const wchar_t* filenm = widestr.c_str();

	return SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (VOID*)filenm, SPIF_UPDATEINIFILE);
}