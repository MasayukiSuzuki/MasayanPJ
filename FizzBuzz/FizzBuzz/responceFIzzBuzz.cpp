#include "stdafx.h"
#include "responceFIzzBuzz.h"


responceFIzzBuzz::responceFIzzBuzz()
{
}
std::string responceFIzzBuzz::responce(int input) {
	std::string result;
	result = "";

	if (input % 3 == 0) {
		result += "Fizz";
	}
	if (input % 5 == 0) {
		result += "Buzz";
	}
	if (result == "") {
		result = std::to_string(input);
	}

	return result;
}

responceFIzzBuzz::~responceFIzzBuzz()
{
}
