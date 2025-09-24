#include <iostream>
#include "../include/calculator.h"

using namespace std;

int main() {
	int a, b;
	char c;

	cout << "C++ Calculator project runs successfully!" << endl;
	cout << "Please enter the 1st number:";
	cin >> a;
	cout << "Please enter the 2nd number:";
	cin >> b;
	cout << "please select the method(from +,-,*,/)";
	cin >> c;

	if (c == '+') cout << a << "+" << b << "=" << add(a, b);
	else if (c == '-') cout << a << "-" << b << "=" << substract(a, b);
	else if (c == '*') cout << a << "*" << b << "=" << multiply(a, b);
	else if (c == '/') cout << a << "/" << b << "=" << divide(a, b);
	else cout << "Check your input!";

	return 0;
}