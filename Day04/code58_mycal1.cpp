#include <iostream>
using namespace std;

class Mycalu {
private:
	int num1;
	int num2;
	int res;
public:
	Mycalu(int a, int b);
	// 생성자로 초기화한다. (콜론초기화)
	void add() {
		res = num1 + num2;
		cout << num1 << "+" << num2 << "=" << res << endl;
	}
	void sub() {
		res = num1 - num2;
		cout << num1 << "-" << num2 << "=" << res << endl;
	}
	void mul() {
		res = num1 * num2;
		cout << num1 << "X" << num2 << "=" << res << endl;
	}
	void div() {
		res = num1 / num2;
		cout << num1 << "/" << num2 << "=" << res << endl;
	}
};

Mycalu::Mycalu(int a, int b) {
	num1 = a;
	num2 = b;
};

int main() {
	Mycalu c(100, 2);
	c.add();
	c.sub();
	c.mul();
	c.div();

	return 0;
}