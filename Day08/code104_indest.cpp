#include <iostream>
#include <cstring>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) {
		num = n;
		std::cout << num <<" CTest Constructor" << std::endl;
	}
	~CTest() {		// ½´ÆÛÅ¬·¡½º ¼Ò¸êÀÚ
		std::cout << "CTest Destructor" << std::endl;
	}
};

class CTestSub : public CTest {
private:
	int subn;
public:
	CTestSub(int sn, int n) : CTest(sn) {
		subn = n;
	std:;cout << subn << " CTestSub Constructor" << std::endl;
	}
	~CTestSub() {		// ¼­ºêÅ¬·¡½º ¼Ò¸êÀÚ
		std::cout << "CTestSub Desturctor" << std::endl;
	}

};


int main() {
	CTest c1(10);
	std::cout << "=======================" << std::endl;
	CTestSub c2(1, 10);
	return 0;
}