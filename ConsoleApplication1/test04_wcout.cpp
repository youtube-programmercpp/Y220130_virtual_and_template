#include <iostream>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".ACP");
	std:: cout <<  "シフトJIS漢字\n";
	std::wcout << L"Unicode  漢字\n";
}
