#include "test.h"
#include "../index.h"
#include "termcolor.hpp"

#include <iostream>
#include <string>

using namespace std;

struct Option {
		string toBe;
		int num;
};

Option options[] = {
		{
				"EVEN",
				8
		},
		{
				"ODD",
				55
		},
		{
				"0",
				0
		},
		{
				"ODD",
				89
		},
		{
				"EVEN",
				2
		}
};

void printGreen(string test, string result) {
	cout << termcolor::green << "TEST " << "\"" << test << "\"" << " PASSED! RESULT: " << result;
}

void printRed(string test, string expected, string result) {
	cout << termcolor::red << "TEST " << "\"" << test << "\"" << " FAILED! EXPECTED: \"" << expected << "\" INSTEAD OF \"" << result << "\"!";
}

void test() {
	int optionsLength = sizeof(options) / sizeof(options[0]);

	for (int i = 0; i < optionsLength; i++) {
		Option option = options[i];

		std::string result = evenOrOdd(option.num);

		cout << endl;

		if (result == option.toBe) {
			printGreen(to_string(option.num), result);
		} else {
			printRed(to_string(option.num), option.toBe, result);
		}

		cout << endl;
	}
}