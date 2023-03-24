#include <iostream>
using namespace std;

class Mycalu {
private:
	int num1;
	int num2;
	int res;
public:
	Mycalu(int a, int b);
	void add();
	void sub();
	void mul();
	void div();

	// 생성자로 초기화한다. (콜론초기화)

};
Mycalu::Mycalu(int a, int b) {
	num1 = a;
	num2 = b;
};

void Mycalu::add() {
	res = num1 + num2;
	cout << num1 << "+" << num2 << "=" << res << endl;
}
void Mycalu::sub() {
	res = num1 - num2;
	cout << num1 << "-" << num2 << "=" << res << endl;
}
void Mycalu::mul() {
	res = num1 * num2;
	cout << num1 << "X" << num2 << "=" << res << endl;
}
void Mycalu::div() {
	res = num1 / num2;
	cout << num1 << "/" << num2 << "=" << res << endl;
}


int main() {
	Mycalu c(100, 50);
	c.add();
	c.sub();
	c.mul();
	c.div();

	return 0;
}