# include <iostream>

class StaticTest {
private:
	static int a;				// ����Լ��� static
	int b;

public:
	StaticTest();
	static void setData(int aa);		// ����Լ��� static
	void print();
};
int StaticTest::a = 10;		// static ������� �ʱ�ȭ

StaticTest::StaticTest()
{
	this->b = 20;
}

StaticTest::StaticTest(int aa)
{
	// this ->a =30;		// static ����� ��ü �����ͷ� ������ �� ����.
	a = aa;
}

void StaticTest::print()
{
	std::cout << "a: " << a << "' " << "b: " << b << std::endl;
}

int main() {
	StaticTest s1, s2;
	s1.print();
	s2.print();

	s1.setData(30);
	s1.print();
	s2.print();

	return 0;
}