#include <iostream>
struct test1 {
	virtual void f()
	{
		std::cout << "test1�^(���N���X)�� f ���Ă΂�܂����B\n";
	}
	void g()
	{
		f();
	}
};
//�h��
//�p��
struct test2 : test1/*���N���X*/ {
	//�����d�l�̊֐�
	void f() override
	{
		std::cout << "test2�^(�h���N���X)�� f ���Ă΂�܂����B\n";
	}
};
int main()
{
	test1 a;
	test2 b;
	a.g();
	b.g();
}
