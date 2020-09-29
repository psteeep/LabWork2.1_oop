#pragma once
#include <iostream>
#include <cmath>
using namespace std;


class PseudoRandom{
public:
	
	int x1 = 5, x2 = 2;
	int a = 1;

	double linear_congruential1(int seed, int a, int m, int c) {
		seed = (a * seed + c) % m;
		return seed;
	}

	double sqr_linear_congruential2(int seed, int a, int m, int d, int c) {
		seed = (d * seed * seed + a * seed + c) % m;
		return seed;
	}

	int fibonacci3(int seed, int m){
		int prev = seed;
		int res = (a + seed) % m;
		a = prev;
		return res;
	}

	double reverse_linear_congruential4(int seed, int a, int c,int m){
		int value = 0;
		while (seed * value % m != 1)
		{
			value++;
		}
		if (value == m)
		{
			value = 0;
		}

		int res = (a * value + c) % m;
		return res;

	}

	double merger5(int a, int m, int c) {
		x1 = linear_congruential1(x1, a, m, c);
		x2 = fibonacci3(x2, m);
		int res = abs(x2 - x1) % m;
		return res;
	}

	double three_sigma6(int seed, int a, int m, int c) {
		double value = seed;
		double res = 0;
		for (int i = 0; i < 12; i++) {
			
			value = linear_congruential1(value,a,m,c);
			res += value / m;
		}

		return value;
	}
/*
	double polar7(int seed, int a, int m, int c, int d) {
		int m1 = 3571;
		int m2 = 1025;
		int value = seed;
		value = linear_congruential1(value,a,m,c);
		double value1 = float(linear_congruential1(value, a, m, c)) / m1;
		double value2 = float(sqr_linear_congruential2(value,a,m,d,c)) / m2;
		value1 = 2 * value1 - 1;
		value2 = 2 * value2 - 1;
		double res = value1 * value1 + value2 * value2;
		while (res >= 1)
		{
			value = linear_congruential1(value,a,m,c);
			value1 = float(linear_congruential1(value, a, m, c)) / m1;
			value2 = float(sqr_linear_congruential2(value, a, m, d, c)) / m2;
			value1 = 2 * value1 - 1;
			value2 = 2 * value2 - 1;

		}
		value1 = value1 * sqrt(-2 * log(res) / res);
		value2 = value2 * sqrt(-2 * log(res) / res);

		return value;
	}
	*/


	
};