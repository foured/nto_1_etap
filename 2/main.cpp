#include <iostream>
#include <string>

std::string XOR(std::string num1, std::string num2);
int main() {
	std::cout << XOR("11011001", "01100011");
	return 0;
}
std::string XOR(std::string num1, std::string num2) {
	std::string res = "";
	for (int i = 0, len = num1.size(); i < len; i++) {
		if (num1[i] == num2[i]) res += "0";
		else res += "1";
	}
	return res;
}
