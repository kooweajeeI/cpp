#include <iostream>

class Myclass {
	int num;
public:
	Myclass(int n) : num(n) {
		std::cout << "������ ȣ��" << std::endl;
	}
	Myclass(Myclass& other) {
		std::cout << "��������� ȣ��" << std::endl;
		num = other.num;
	}
	void getData() {
		std::cout << num << std::endl;
	}
};

int main() {
	Myclass m1(10);		// ������ ȣ��
	Myclass m2 = m1;	// ��������� ȣ��. int num2 = num1
	Myclass m3(m2);		// ��������� ȣ��

	m1.getData();
	m2.getData();
	m3.getData();
	return 0;
}