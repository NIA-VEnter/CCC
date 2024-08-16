#include <iostream>
#include <string>

using namespace std;


int in_out();


int main() {
	short int q = 1;


	while (q == 1) {
		in_out();


	}

	return 0;
}

int in_out() {
	short int q1 = 1;
	int a;
	bool qch;
	int b;
	char math_act;


	cout << "first number is" << endl;
	cin >> a;


	while (q1 == 1) {
		cout << "type of mathematical action is" << endl;
		cin >> math_act;

		if (math_act == '+' || '-')
			q1++;
		else if (math_act == '*' || '/')
			q1++;
		else
			cout << "uncorrect mathematical action" << endl; continue;
	}
	q1--;


	cout << "second number is" << endl;
	cin >> b;





	switch (math_act)
	{
	case '+':
		cout << "result is:" << a + b << endl; break;


	case '-':
		cout << "result is:" << a - b << endl; break;


	case '*':
		cout << "result is:" << a * b << endl; break;


	case '/':
		cout << "result is:" << a / b << endl; break;

	}
	return 0;

}