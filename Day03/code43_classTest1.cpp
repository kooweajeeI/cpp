#include <iostream>
using namespace std;

class Myclass {
private:
	int private_val;
public:
	int public_val;
protected:
	int protected_val;
public:
	void set(int an) {
		private_val = an;
	}
	void get() {
		cout << "public_val: " << public_val << endl;
		cout << "private_val: " << private_val << endl;
	}

};

int main() {
	Myclass o;
	o.public_val = 00;

	o.get();
	return 0;
}
