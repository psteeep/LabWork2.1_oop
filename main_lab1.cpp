#include <iostream>
#include <cmath>
#include "method_class.h"

using namespace std;

int main() {
	int number_method;
	cout << "Choose one of ten methods to generate pseudo-random numbers (1-10) -> ";
	cin >> number_method;

	int seed;
	cout << "Enter the initial value (seed) = ";
	cin >> seed;

	int sum = 0;

	int a, c, m1, m2, m, d;

	PseudoRandom number;
	switch (number_method)
	{
	case 1:
		cout << "Enter the multiplier (a) = ";
		cin >> a;

		cout << "Enter increment (c) = ";
		cin >> c;

		cout << "enter the module (m) = ";
		cin >> m;

		cout << "Random be like >>> " << endl;

		for (int i = 0; i < 500; i++) {
			cout << seed << " ";
			histogram1(double(seed) / m);
			seed = number.linear_congruential1(seed, a, c, m);
		}
		display1();
		break;
	case 2:
		cout << "Enter the multiplier (a) = ";
		cin >> a;

		cout << "Enter the multiplier (d) = ";
		cin >> d;

		cout << "Enter increment (c) = ";
		cin >> c;

		cout << "enter the module (m) = ";
		cin >> m;

		cout << "Random be like >>> " << endl;

		for (int i = 0; i < 500; i++) {
			cout << seed << " ";
			histogram1(double(seed) / m);
			seed = number.sqr_linear_congruential2(seed, a, c, d, m);
		}
		display1();
		break;
	case 3:
		cout << "enter the module (m) = ";
		cin >> m;

		cout << "Random be like >>> " << endl;

		for (int i = 0; i < 5; i++) {
			cout << seed << " ";
			histogram1(double(seed) / m);
			seed = number.fibonacci3(seed, m);
		}
		display1();
		break;
	case 4:
		cout << "Enter the multiplier (a) = ";
		cin >> a;

		cout << "Enter increment (c) = ";
		cin >> c;

		cout << "enter the module (m) = ";
		cin >> m;

		cout << "Random be like >>> " << endl;

		for (int i = 0; i < 500; i++) {
			cout << seed << " ";
			histogram1(double(seed) / m);
			seed = number.reverse_linear_congruential4(seed, a, c, m);
		}
		display1();
		break;
	case 5:
		cout << "Enter the multiplier (a) = ";
		cin >> a;

		cout << "Enter increment (c) = ";
		cin >> c;

		cout << "Enter the module (m1) for first method = ";
		cin >> m1;

		cout << "Enter the module (m2) for third method = ";
		cin >> m2;

		cout << "Enter the module (m) = ";
		cout << m;

		cout << "Random be like >>> " << endl;
		for (int i = 0; i < 500; i++) {
			cout << seed << " ";
			histogram1(double(seed) / m);
			seed = number.merger5(a, c, m1, m2, m);
		}
		display1();
		break;

	case 6:
		cout << "Enter the module (m1) for third method = ";
		cin >> m1;

		cout << "Enter the module (m) = ";
		cin >> m;

		cout << "Random be like >>> " << endl;
		for (int i = 0; i < 500; i++) {

			seed = number.three_sigma6(seed, m1, m);
		}
		cout << endl;
		display2();

		break;


	case 7:
		cout << "Enter the multiplier (a) = ";
		cin >> a;

		cout << "Enter the multiplier (d) = ";
		cin >> d;

		cout << "Enter increment (c) = ";
		cin >> c;

		cout << "Enter the module (m1) for first method = ";
		cin >> m1;

		cout << "Enter the module (m2) for second method = ";
		cin >> m2;

		cout << "Random be like >>> " << endl;
		for (int i = 0; i < 250; i++) {
			seed = number.polar7(seed, a, c, d, m1, m2);
		}
		cout << endl;
		display2();
		break;

	case 8:
		cout << "Enter the multiplier (a) = ";
		cin >> a;

		cout << "Enter the multiplier (d) = ";
		cin >> d;

		cout << "Enter increment (c) = ";
		cin >> c;

		cout << "Enter the module (m1) for first method = ";
		cin >> m1;

		cout << "Enter the module (m2) for second method = ";
		cin >> m2;

		cout << "Random be like >>> " << endl;
		for (int i = 0; i < 500; i++) {

			seed = number.relations8(seed, a, c, d, m1, m2);
		}
		cout << endl;
		display2();
		break;

	case 9:
		cout << "Enter the multiplier (a) = ";
		cin >> a;

		cout << "Enter the multiplier (d) = ";
		cin >> d;

		cout << "Enter increment (c) = ";
		cin >> c;

		cout << "enter the module (m) = ";
		cin >> m;

		cout << "Random be like >>> " << endl;
		for (int i = 0; i < 500; i++) {
			seed = number.logarithm9(seed, a, c, d, m);
		}
		display3();
		break;
	case 10:
		cout << "Enter the multiplier (a) = ";
		cin >> a;

		cout << "Enter the multiplier (d) = ";
		cin >> d;

		cout << "Enter increment (c) = ";
		cin >> c;

		cout << "Enter the module (m1) for first method = ";
		cin >> m1;

		cout << "Enter the module (m2) for second method = ";
		cin >> m2;

		cout << "Random be like >>> " << endl;
		for (int i = 0; i < 500; i++) {
			seed = number.ahrens(seed, a, c, d, m1, m2);
		}
		display3();
		break;

	default: std::cout << "Error!"; break;
	}


	return 0;
}
