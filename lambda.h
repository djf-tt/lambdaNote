#ifndef _LAMBDA_H_
#define _LAMBDA_H_

#include <iostream>
#include <array>
#include <algorithm>
#include <functional>
#include <math.h>

using namespace std;

auto add(int x, int y) -> int { return x + y; };

std::function<int(int)> func = [](int x) { return abs(x); };
auto func1 = [](int x) -> std::function<int(int)> { return [=](int y) {return x + y; }; };

auto testLambda() -> void {
	array<int, 4> intArray = { 0 };
	cout << add(5, 5) << endl;
	cout << func(-5) << endl;

	int param1 = 10;
	auto div = [param1]() mutable { return param1++; };
	auto lFunc = func1(8);
	cout << lFunc(2) << endl;
}

#endif
