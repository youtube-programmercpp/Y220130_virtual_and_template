#include <type_traits>
#include <iostream>
template<class T, std::enable_if_t<std::is_arithmetic<T>::value, bool> = true>void f(T a)
{
	std::cout << a << " ‚ð‚Q”{‚·‚é‚Æ " << 2 * a << " ‚É‚È‚éB\n";
}
template<class T, std::enable_if_t<std::is_pointer<T>::value, bool> = true>void f(T a)
{
	std::cout << a << " ‚Íƒ|ƒCƒ“ƒ^‚Ì‚½‚ß‚Q”{‚·‚é‚±‚Æ‚Ío—ˆ‚Ü‚¹‚ñB\n";
}
int main()
{
	//ŽZpŒ^
	//arithmetic types
	f(0);
	f(1.23);
	f(5LL);//long long ... 64-bit integer
	f(10ULL);//unsigned long long
	f("A");
	f(L"A");
	f((void*)0);
}
