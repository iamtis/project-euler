#pragma once

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

inline int problem4()
{
	int largest = 0;
	string sum = nullptr;
	string first_half = nullptr;
	string second_half = nullptr;

	for (int i = 999; i >= 2; --i){
		for (int j = 999; j >= 2; --j){
			sum = to_string(i * j);

			first_half = sum.substr(0, sum.length() / 2);
			second_half = sum.substr(sum.length() / 2);

			reverse(second_half.begin(), second_half.end());

			if (first_half == second_half){
				cout << sum << endl;
			}
		}
	}	
	return stoi(sum);
}
