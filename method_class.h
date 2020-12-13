#pragma once
#include <iostream>
#include <cmath>
using namespace std;

double mas[10];
double m[5];
void histogram1(double x)
{
	if (x > -2 && x <= -0.6) { m[0]++; }
	else if (x > -0.6 && x <= 0.8) { m[1]++; }
	else if (x > 0.8 && x <= 2.2) { m[2]++; }
	else if (x > 2.2 && x <= 3.6) { m[3]++; }
	else if (x > 3.6 && x <= 5) { m[4]++; }
}
void histogram2(double x)
{
	if (x > -3.0 && x <= -2.4) { mas[0]++; }
	else if (x > -2.4 && x <= -1.8) { mas[1]++; }
	else if (x > -1.8 && x <= -1.2) { mas[2]++; }
	else if (x > -1.2 && x <= -0.6) { mas[3]++; }
	else if (x > -0.6 && x <= 0.0) { mas[4]++; }
	else if (x > 0.0 && x <= 0.6) { mas[5]++; }
	else if (x > 0.6 && x <= 1.2) { mas[6]++; }
	else if (x > 1.2 && x <= 1.8) { mas[7]++; }
	else if (x > 1.8 && x <= 2.4) { mas[8]++; }
	else if (x > 2.4 && x <= 3.0) { mas[9]++; }
}

void histogram3(double x)
{
	if (x > 0 && x <= 10) { mas[0]++; }
	else if (x > 10 && x <= 20) { mas[1]++; }
	else if (x > 20 && x <= 30) { mas[2]++; }
	else if (x > 30 && x <= 40) { mas[3]++; }
	else if (x > 40 && x <= 50) { mas[4]++; }
	else if (x > 50 && x <= 60) { mas[5]++; }
	else if (x > 60 && x <= 70) { mas[6]++; }
	else if (x > 70 && x <= 80) { mas[7]++; }
	else if (x > 80 && x <= 90) { mas[8]++; }
	else if (x > 90 && x <= 100) { mas[9]++; }
}

void display1() {
	int sum = 0;
	for (int i = 0; i < 5; ++i)
		sum += m[i];
	for (int i = 0; i < 5; ++i)
		cout << "[" << double(i) / 5 << ";" << double(i + 1) / 5 << "] " << m[i] / sum << '\n';
}
void display2() {
	int sum = 0;
	for (int i = 0; i < 10; ++i)
		sum += mas[i];
	for (int i = 0; i < 10; ++i)
		cout << "[" << double(i) * 6 / 10 - 3 << ";" << double(i + 1) * 6 / 10 - 3 << "] " << mas[i] / sum << '\n';
}
void display3() {
	int sum = 0;
	for (int i = 0; i < 10; ++i)
		sum += mas[i];
	for (int i = 0; i < 10; ++i)
		cout << "[" << i * 10 << ";" << (i + 1) * 10 << "] " << mas[i] / sum << '\n';
}


class PseudoRandom{
private:
	int x1 = 5, x2 = 2;
	int a = 1;

public:
	double linear_congruential1(int seed, int a, int c, int m);
	double sqr_linear_congruential2(int seed, int a, int c, int d, int m);
	double fibonacci3(int seed, int m);
	double reverse_linear_congruential4(int seed, int a, int c, int m);
	double merger5(int a, int c, int m1, int m2, int m);
	double three_sigma6(int seed, int a, int c, int m1, int m);
	double polar7(int seed, int a, int c, int d, int m1, int m2);
	double relations8(int seed, int a, int c, int d, int m1, int m2);
	double logarithm9(int seed, int a, int c, int d, int m);
	double ahrens(int seed, int a, int c, int m1, int m2);
};