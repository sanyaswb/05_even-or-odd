#include <iostream>
#include <string>

std::string evenOrOdd(int num) {
	return num % 2 == 1 ? "ODD" : num == 0 ? "0" : "EVEN";
}

