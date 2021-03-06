#include <type_traits>
#include <iostream>
template<class T, std::enable_if_t<std::is_arithmetic<T>::value, bool> = true>void f(T a)
{
	std::cout << a << " を２倍すると " << 2 * a << " になる。\n";
}
template<class T, std::enable_if_t<std::is_pointer<T>::value, bool> = true>void f(T a)
{
	std::cout << a << " はポインタのため２倍することは出来ません。\n";
}
int main()
{
	//算術型
	//arithmetic types
	f(0);
	f(1.23);
	f(5LL);//long long ... 64-bit integer
	f(10ULL);//unsigned long long
	f("A");
	f(L"A");
	f((void*)0);
}
