#include <iostream>

int func(int n = 41, int m = 57, int r = 0 );
int main() {
	std::cout << func();
	return 0;
}
int func(int n, int m, int r) {
	if (n != m) {
		if (n < m) {
			n += 3;
		}
		else {
			m += 7;
		}
		r++;
		return func(n, m, r);
	}
	else {
		return r;
	}
}
