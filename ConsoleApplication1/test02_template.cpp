#include <iostream>
template<class T>void f(T a)
{
	std::cout << a << '\n';
}

void f(int a)
{
	std::cout << a << '\n';
}
void f(double a)
{
	std::cout << a << '\n';
}
void f(const char* a)
{
	std::cout << a << '\n';
}
void f(const wchar_t* a)
{
	std::wcout << a << '\n';
}

int main()
{
	f(10);//f(int a);
	f(10U);//f(unsigned a);
	f(10L);//f(long a);
	f(0.1);//f(double a);
	f(0.1f);//f(float a);
	f("TEST");//f(const char* a);
	f(L"TEST");//f(const wchar_t* a);
}
