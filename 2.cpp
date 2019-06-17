#pragma once

#include <iostream>

using namespace std;

inline int problem2() 
{
	int first_number = 1;
	int second_number = 1;

	int sum_of_fibonacci_sequence = 0;

	while (second_number < 4000000) {
		int temp = second_number;

		second_number = first_number + second_number;
		first_number = temp;

		if (second_number % 2 == 0) {
			sum_of_fibonacci_sequence += second_number;
		}
	}
	return sum_of_fibonacci_sequence;
}