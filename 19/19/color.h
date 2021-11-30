#pragma once
#include <windows.h>
HANDLE console;
void color()
{
	console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, 2);
}