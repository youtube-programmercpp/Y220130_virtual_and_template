#include <iostream>
struct test1 {
	virtual void f()
	{
		std::cout << "test1型(基底クラス)の f が呼ばれました。\n";
	}
	void g()
	{
		f();
	}
};
//派生
//継承
struct test2 : test1/*基底クラス*/ {
	//同じ仕様の関数
	void f() override
	{
		std::cout << "test2型(派生クラス)の f が呼ばれました。\n";
	}
};
int main()
{
	test1 a;
	test2 b;
	a.g();
	b.g();
}
