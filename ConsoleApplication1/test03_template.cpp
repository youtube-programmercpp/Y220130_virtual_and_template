#include <iostream>
template<class T>void f(T a)
{
	std::cout << a << '\n';
}
void f(const std::string& a)
{
	std::cout << a << '\n';
}
void f(const std::wstring& a)
{
	std::wcout << a << '\n';
}
void f(const wchar_t*  a)
{
	std::wcout << a << '\n';
}

#include <string>
int main()
{
	f(10);
	f(2.0);
	f(3L);
	f(4L);
	f(              "ABCDEFGHIJKLMNOPQRSTUVWXYZ") ;//f(const  char  *)
	f(             L"ABCDEFGHIJKLMNOPQRSTUVWXYZ") ;//f(const wchar_t*)
	f(std:: string( "ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	f(std::wstring(L"ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
}
