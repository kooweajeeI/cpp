#include <iostream>
using namespace std;

void divide(int a, int b) {
	int a, b, c, d;
	cout << "�������� �Է��ϼ���: " << endl;
	cin >> a;
	cout << "������ �Է��ϼ���: " << endl;
	cin >> b;

	if (b == 0) throw b;

	c = a / b;
	cout << "��: " << c << endl;

	d = a % b;
	cout << "������: " << d << endl;
}
int main()
{
	try{
		divide(10, 3);
		divide(100, 5);
		divide(10, 0);
	}
	catch (int ex) {
		cout << ex << "�� ���� �� �����ϴ�. ���ܹ߻�" << endl;
	}

	cout << "���ܰ� �߻��� �ص� ��������!" << endl;



	return 0;
}