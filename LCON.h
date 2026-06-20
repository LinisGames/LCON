#pragma once

// LCON 0.2 - Lin's Console Library

namespace LCON {
	enum Color {
		black,
		white,
		gray,
		dark_gray,
		red,
		dark_red,
		green,
		dark_green,
		blue,
		dark_blue,
		yellow,
		dark_yellow,
		cyan,
		dark_cyan,
		magenta,
		dark_magenta
	};

#ifdef _WIN32
#include <Windows.h>

	void SetTextColor(Color color) {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		GetConsoleScreenBufferInfo(hConsole, &csbi);
		WORD CurrentBg = csbi.wAttributes & 0xF0;

		WORD TextColor;
		switch (color) {
		case black:
			TextColor = 0;
			break;
		case white:
			TextColor = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY;
			break;
		case gray:
			TextColor = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
			break;
		case dark_gray:
			TextColor = FOREGROUND_INTENSITY;
			break;
		case red:
			TextColor = FOREGROUND_RED | FOREGROUND_INTENSITY;
			break;
		case dark_red:
			TextColor = FOREGROUND_RED;
			break;
		case green:
			TextColor = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
			break;
		case dark_green:
			TextColor = FOREGROUND_GREEN;
			break;
		case blue:
			TextColor = FOREGROUND_BLUE | FOREGROUND_INTENSITY;
			break;
		case dark_blue:
			TextColor = FOREGROUND_BLUE;
			break;
		case yellow:
			TextColor = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
			break;
		case dark_yellow:
			TextColor = FOREGROUND_RED | FOREGROUND_GREEN;
			break;
		case cyan:
			TextColor = FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY;
			break;
		case dark_cyan:
			TextColor = FOREGROUND_GREEN | FOREGROUND_BLUE;
			break;
		case magenta:
			TextColor = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY;
			break;
		case dark_magenta:
			TextColor = FOREGROUND_RED | FOREGROUND_BLUE;
			break;
		default:
			break;
		}
		SetConsoleTextAttribute(hConsole, TextColor | CurrentBg);
	}

	void SetTextBackgroundColor(Color color) {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		GetConsoleScreenBufferInfo(hConsole, &csbi);
		WORD CurrentText = csbi.wAttributes & 0x0F;

		WORD BgColor;
		switch (color) {
		case black:
			BgColor = 0;
			break;
		case white:
			BgColor = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY;
			break;
		case gray:
			BgColor = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE;
			break;
		case dark_gray:
			BgColor = BACKGROUND_INTENSITY;
			break;
		case red:
			BgColor = BACKGROUND_RED | BACKGROUND_INTENSITY;
			break;
		case dark_red:
			BgColor = BACKGROUND_RED;
			break;
		case green:
			BgColor = BACKGROUND_GREEN | BACKGROUND_INTENSITY;
			break;
		case dark_green:
			BgColor = BACKGROUND_GREEN;
			break;
		case blue:
			BgColor = BACKGROUND_BLUE | BACKGROUND_INTENSITY;
			break;
		case dark_blue:
			BgColor = BACKGROUND_BLUE;
			break;
		case yellow:
			BgColor = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY;
			break;
		case dark_yellow:
			BgColor = BACKGROUND_RED | BACKGROUND_GREEN;
			break;
		case cyan:
			BgColor = BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY;
			break;
		case dark_cyan:
			BgColor = BACKGROUND_GREEN | BACKGROUND_BLUE;
			break;
		case magenta:
			BgColor = BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_INTENSITY;
			break;
		case dark_magenta:
			BgColor = BACKGROUND_RED | BACKGROUND_BLUE;
			break;
		default:
			break;
		}
		SetConsoleTextAttribute(hConsole, CurrentText | BgColor);
	}

	void SetFullBackgroundColor(Color color) {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		GetConsoleScreenBufferInfo(hConsole, &csbi);
		COORD StartCoord = { 0, 0 };
		DWORD ConsoleSize = csbi.dwSize.X * csbi.dwSize.Y;
		DWORD written;

		WORD BgColor;

		switch (color) {
		case black:
			BgColor = 0;
			break;
		case white:
			BgColor = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY;
			break;
		case gray:
			BgColor = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE;
			break;
		case dark_gray:
			BgColor = BACKGROUND_INTENSITY;
			break;
		case red:
			BgColor = BACKGROUND_RED | BACKGROUND_INTENSITY;
			break;
		case dark_red:
			BgColor = BACKGROUND_RED;
			break;
		case green:
			BgColor = BACKGROUND_GREEN | BACKGROUND_INTENSITY;
			break;
		case dark_green:
			BgColor = BACKGROUND_GREEN;
			break;
		case blue:
			BgColor = BACKGROUND_BLUE | BACKGROUND_INTENSITY;
			break;
		case dark_blue:
			BgColor = BACKGROUND_BLUE;
			break;
		case yellow:
			BgColor = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY;
			break;
		case dark_yellow:
			BgColor = BACKGROUND_RED | BACKGROUND_GREEN;
			break;
		case cyan:
			BgColor = BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY;
			break;
		case dark_cyan:
			BgColor = BACKGROUND_GREEN | BACKGROUND_BLUE;
			break;
		case magenta:
			BgColor = BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_INTENSITY;
			break;
		case dark_magenta:
			BgColor = BACKGROUND_RED | BACKGROUND_BLUE;
			break;
		default:
			break;
		}
		FillConsoleOutputAttribute(hConsole, BgColor, ConsoleSize, StartCoord, &written);
		SetConsoleTextAttribute(hConsole, (csbi.wAttributes & 0x0F) | BgColor);
	}

	void SetConsoleEncoding_UTF8() {
		SetConsoleOutputCP(65001);
		SetConsoleCP(65001);
	}
	void SetConsoleEncoding_CP1251() {
		SetConsoleOutputCP(1251);
		SetConsoleCP(1251);
	}
	void SetConsoleEncoding_CP866() {
		SetConsoleOutputCP(866);
		SetConsoleCP(866);
	}

	void Console_Clear() {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		GetConsoleScreenBufferInfo(hConsole, &csbi);
		COORD Start_Coord = { 0, 0 };
		DWORD written;

		FillConsoleOutputCharacter(hConsole, ' ', csbi.dwSize.X * csbi.dwSize.Y, Start_Coord, &written);

		FillConsoleOutputAttribute(hConsole, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, Start_Coord, &written);

		SetConsoleCursorPosition(hConsole, Start_Coord);
	}

	void Print(const char* text) {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		DWORD written;
		WriteConsoleA(hConsole, text, strlen(text), &written, NULL);
	}

#else
#endif
}
