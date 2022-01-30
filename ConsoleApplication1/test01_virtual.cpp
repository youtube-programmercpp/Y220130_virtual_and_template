#include <iostream>
struct test1 {
	virtual void f()
	{
		std::cout << "test1Œ^(Šî’êƒNƒ‰ƒX)‚Ì f ‚ªŒÄ‚Î‚ê‚Ü‚µ‚½B\n";
	}
	void g()
	{
		f();
	}
};
//”h¶
//Œp³
struct test2 : test1/*Šî’êƒNƒ‰ƒX*/ {
	//“¯‚¶Žd—l‚ÌŠÖ”
	void f() override
	{
		std::cout << "test2Œ^(”h¶ƒNƒ‰ƒX)‚Ì f ‚ªŒÄ‚Î‚ê‚Ü‚µ‚½B\n";
	}
};
int main()
{
	test1 a;
	test2 b;
	a.g();
	b.g();
}
