// Copyright 2022 NNTU-CS
#include "alg.h"
#include <iostream>
#include <cstdint>

double pown(double, uint16_t);
uint64_t fact(uint16_t);
double calcItem(double, uint16_t);
double expn(double, uint16_t);
double sinn(double, uint16_t);
double cosn(double, uint16_t);

using namespace std;

int main() {
    	setlocale(LC_ALL, "Russian");
	double value;
	uint16_t n;
	double x;
	uint16_t count;

	cout << "ВВЕДИТЕ ЧИСЛО VALUE" << endl;
	cin >> value;
	cout << "ВВЕДИТЕ ЧИСЛО N" << endl;
	cin >> n;
	cout << "ВВЕДИТЕ ЧИСЛО X" << endl;
	cin >> x;
	cout << "ВВЕДИТЕ ЧИСЛО COUNT" << endl;
	cin >> count;

	cout << "ЧИСЛО VALUE В СТЕПЕНИ N = " << pown(value, n) << endl;;
	cout <<"ФАКТОРИАЛ N = " << fact(n) << endl;
	cout << "ВЫЧИСЛЕНИЕ ЧЛЕНА РЯДА = " << calcItem(x, n) << endl;
	cout << "ВЫЧИСЛЕНИЕ ЗНАЧЕНИЯ ФУНКЦИИ EXPN(X) = " << expn(x, count) << endl;
	cout << "ВЫЧИСЛЕНИЕ ЗНАЧЕНИЯ ФУНКЦИИ SIN(X) = " << sinn(x, count) << endl;
	cout << "ВЫЧИСЛЕНИЕ ЗНАЧЕНИЯ ФУНКЦИИ COS(X) = " << cosn(x, count) << endl;
    return 0;
}
