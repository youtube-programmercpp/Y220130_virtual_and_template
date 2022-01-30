#include <type_traits>
#include <iostream>
template<class T, std::enable_if_t<std::is_arithmetic<T>::value, bool> = true>void f(T a)
{
	std::cout << a << " ���Q�{����� " << 2 * a << " �ɂȂ�B\n";
}
template<class T, std::enable_if_t<std::is_pointer<T>::value, bool> = true>void f(T a)
{
	std::cout << a << " �̓|�C���^�̂��߂Q�{���邱�Ƃ͏o���܂���B\n";
}
int main()
{
	//�Z�p�^
	//arithmetic types
	f(0);
	f(1.23);
	f(5LL);//long long ... 64-bit integer
	f(10ULL);//unsigned long long
	f("A");
	f(L"A");
	f((void*)0);
}
