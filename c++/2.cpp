#pragma once

#include <iostream>

using namespace std;

inline int problem1() 
{
	int sum = 0;
	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
		else if (i % 5 == 0) {
			sum += i;
		}
	}
	return sum;
}
