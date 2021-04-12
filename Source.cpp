//Source.cpp
#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
	Pair A(6, 2);
	Pair D(6, 2);
	cout << (A == D) << endl;
	Point B,C;
	cin >>  B;
	cin >> C;
	cout << "" << endl;
	cout << (B == C) << endl;
	cout << (B != C) << endl;
	cout << (B >= C) << endl;
	cout << (B <= C) << endl;
}
