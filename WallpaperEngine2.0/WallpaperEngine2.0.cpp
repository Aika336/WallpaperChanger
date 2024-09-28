#include "Wallpaper.h"
#include <string>
#include <chrono>
#include <thread>


int main() {
	Wallpaper wallpaper;
	std::string str = "";

	/*char buf[256];
	GetCurrentDirectoryA(256, buf);
	std::string file = "C:\\Users\\aikas\\source\\repos\\WallpaperEngine2.0\\Frames\\1.png";
	std::wstring widestr = std::wstring(file.begin(), file.end());
	const wchar_t* filenm = widestr.c_str();

	SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (VOID *)filenm, SPIF_UPDATEINIFILE);*/

	while (true) {
		for (int i = 0; i <= 23; i++)
		{
			str = "C:/Users/aikas/source/repos/WallpaperEngine2.0/Frames/";
			str += std::to_string(i) + ".png";
			wallpaper.setWallpaper(str);
			std::this_thread::sleep_for(std::chrono::milliseconds(100));
			std::cout << str << std::endl;
		}
	}

	return 0;
}