#include <iostream>
#include <string>

std::string evenOrOdd(int num) {
	return num == 0 ? "0" : num % 2 == 0 ? "EVEN" : "ODD";
}
