#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{	
	double x, y, result;
	char oper;

	Calculator c;
	while (true) {
		char ch;
		cout << "請輸入運算式: ";
		cin >> x >> oper >> y;
		result = c.Calculate(x, oper, y);
		cout << "Result: " << result << endl;
		cout << "是否繼續? (y/n) ";
		cin >> ch;
		if (ch == 'y') {
			cout << "Continue..." << endl;
			cout << "Go..." << endl;
		}
		else break;
	}
}