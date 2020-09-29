#include <iostream>
#include <cmath>
#include "method_class.h"

using namespace std;

int main() {
	int number_method;
	cout << "Choose one of ten methods to generate pseudo-random numbers (1-10) -> ";
	cin >> number_method;
	

	PseudoRandom number;
	switch (number_method)
	{
	case 1:
		int seed, a, m, c;
		cout << "Enter seed --> ";
		cin >> seed;

		cout << "Enter the multiplier <a> --> ";
		cin >> a;

		cout << "Enter the module <m> --> ";
		cin >> m;

		cout << "Enter the increment <ñ> --> ";
		cin >> c;
		
		cout << "Random be like >>> ";
		for (int i = 0; i < 500; i++) {
		
			 seed = number.linear_congruential1(seed, a, m, c);
			 cout << seed << " " ;
		}
			break;
	case 2: 
		int d;
		cout << "Enter seed --> ";
		cin >> seed;

		cout << "Enter the multiplier <a> --> ";
		cin >> a;

		cout << "Enter the module <m> --> ";
		cin >> m;

		cout << "Enter the increment <ñ> --> ";
		cin >> c;

		cout << "Enter the multiplier <d> --> ";
		cin >> d;


		cout << "Random be like >>> ";
		for (int i = 0; i < 500; i++) {

			seed = number.sqr_linear_congruential2(seed, a, m,d, c);
			cout << seed << " ";
		}
		break;
	case 3: 
		
		cout << "Enter seed --> ";
		cin >> seed;

		cout << "Enter the module <m> --> ";
		cin >> m;

		cout << "Random be like >>> ";
		for (int i = 0; i < 500; i++) {

			seed = number.fibonacci3(seed,m);
			cout << seed << " ";
		}
		break;
	
	case 4:

		cout << "Enter seed --> ";
		cin >> seed;

		cout << "Enter the multiplier <a> --> ";
		cin >> a;

		cout << "Enter the module <m> --> ";
		cin >> m;

		cout << "Enter the increment <ñ> --> ";
		cin >> c;

		cout << "Random be like >>> ";
		for (int i = 0; i < 500; i++) {

			seed = number.reverse_linear_congruential4(seed, a,c,m);
			cout << seed << " ";
		}
		break;
	case 5: 
		cout << "Enter the multiplier <a> --> ";
		cin >> a;

		cout << "Enter the module <m> --> ";
		cin >> m;

		cout << "Enter the increment <ñ> --> ";
		cin >> c;
		cout << "Random be like >>> ";
		for (int i = 0; i < 500; i++) {

			seed = number.merger5(a,m,c);
			cout << seed << " ";
		}
		break;
	case 6: 

		cout << "Enter seed --> ";
		cin >> seed;

		cout << "Enter the multiplier <a> --> ";
		cin >> a;

		cout << "Enter the module <m> --> ";
		cin >> m;

		cout << "Enter the increment <ñ> --> ";
		cin >> c;
		

		cout << "Random be like >>> ";
		for (int i = 0; i < 500; i++) {

			seed = number.three_sigma6(seed, a,m,c);
			cout << seed << " ";
		}
		break;

	case 7: break;
	case 8: break;
	case 9:  break;
	case 10: break;
	default: std::cout << "error"; break;
	}
	return 0;
}