#include "method_class.h"


double PseudoRandom::linear_congruential1(int seed, int a, int c, int m) {
	seed = (a * seed + c) % m;
	return seed;
}


double PseudoRandom::sqr_linear_congruential2(int seed, int a, int c, int d, int m) {
	seed = (d * seed * seed + a * seed + c) % m;
	return seed;
}


double PseudoRandom::fibonacci3(int seed, int m) {
	int res = (a + seed) % m;
	a = seed;
	seed = res;

	return res;
}


double PseudoRandom::reverse_linear_congruential4(int seed, int a, int c, int m) {
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

double PseudoRandom::merger5(int a, int c, int m1, int m2, int m) {
	x1 = linear_congruential1(x1, a, c, m1);
	x2 = fibonacci3(x2, m2);
	int res = abs(x2 - x1) % m;
	return res;
}

double PseudoRandom::three_sigma6(int seed, int a, int c, int m1, int m) {
	double value = seed;
	double res = 0;

	for (int i = 0; i < 12; i++)
	{
		value = linear_congruential1(value, a, c, m1);
		res += value / m;
	}
	res -= 6;
	cout << res << " ";
	histogram2(res);
	return value;
}

double PseudoRandom::polar7(int seed, int a, int c, int d, int m1, int m2) {
	int value = seed;
	value = linear_congruential1(value, a, c, m1);
	double value1 = linear_congruential1(value, a, c, m1) / m1;
	double value2 = sqr_linear_congruential2(value, a, c, d, m2) / m2;
	value1 = 2 * value1 - 1;
	value2 = 2 * value2 - 1;
	double res = value1 * value1 + value2 * value2;
	while (res >= 1)
	{
		value = linear_congruential1(value, a, c, m1);
		value1 = linear_congruential1(value, a, c, m1) / m1;
		value2 = sqr_linear_congruential2(value, a, c, d, m2) / m2;
		value1 = 2 * value1 - 1;
		value2 = 2 * value2 - 1;
		res = value1 * value1 + value2 * value2;
	}
	value1 = value1 * sqrt(-2 * log(res) / res);
	value2 = value2 * sqrt(-2 * log(res) / res);
	cout << value1 << " " << value2 << " ";
	histogram2(value1);
	histogram2(value2);
	return value;
}

double PseudoRandom::relations8(int seed, int a, int c, int d, int m1, int m2) {
	int value = seed;
	value = linear_congruential1(value, a, c, m1);
	double value1 = linear_congruential1(value, a, c, m1) / m1;
	double value2 = sqr_linear_congruential2(value, a, c, d, m2) / m2;
	double res = sqrt(8 / 2.72) * ((value1 - 0.5) / value2);
	while (res * res >= -4 * log(value2))
	{
		value = linear_congruential1(value, a, c, m1);
		value1 = linear_congruential1(value, a, c, m1) / m1;
		value2 = sqr_linear_congruential2(value, a, c, d, m2) / m2;
		res = sqrt(8 / 2.72) * ((value1 - 0.5) / value2);
	}
	cout << res << " ";
	histogram2(res);
	return value;
}

double PseudoRandom::logarithm9(int seed, int a, int c, int d, int m) {
	double value = linear_congruential1(seed, a, c, m);
	double res = -57 * log(value / m);
	cout << res << " ";
	histogram3(res);
	return value;
}


double PseudoRandom::ahrens(int seed, int a, int c, int m1, int m2) {
	//int m1 = 3571;
	//int m2 = 1025;
	float u = linear_congruential1(seed, a, c, m1), ak = 1.001,
		y = tan(cos(0) * u),
		x = sqrt(2 * ak - 1) * y + ak - 1;
	if (x <= 0)
		return ahrens(seed, a, c, m1, m2);
	float v = reverse_linear_congruential4(seed, a, c, m2);
	if (v > (1 + y * y) * exp((ak - 1) * log(x / ak - 1) - sqrt(2 * ak - 1) * y))
		return ahrens(seed, a, c, m1, m2);
	histogram3(x);
	return x * 100;
}
