//
// main.cpp
// Reverse Numbers
// Created by ax on 9/28/16.
// Copyright © 2016 COMP130. All rights reserved.

#include<iostream>
#include<string>

using namespace std;

int return_revese(int& number_input) {

	int switcherooed = 0;
	int working_digits = number_input;

	while (working_digits > 0)
	{
		int slice_off_last_digit = working_digits % 10;
		switcherooed = switcherooed * 10 + slice_off_last_digit;
		working_digits = working_digits / 10;
	}

	return switcherooed;
}

int main() {

	int num_input = 0;
	
	cout << "Enter some numbers: ";

	cin >> num_input;

	cout << endl;

	cout << return_revese(num_input);

	return 0;

}
