#include <sstream>

#include "fizzbuzz.h"

/*　-----------------------------------------------------------
 * global.
 * ----------------------------------------------------------*/
std::string numString;

/*　-----------------------------------------------------------
 * const.
 * ----------------------------------------------------------*/
const std::string STR_FIZZ = "fizz";
const std::string STR_BUZZ = "buzz";
const std::string STR_FIZZBUZZ = "fizzbuzz";

/*　-----------------------------------------------------------
 * sub func.
 * ----------------------------------------------------------*/
/* ------------------------------------------- */
const std::string& IntToString(int n) {
	std::stringstream ss;
	ss << n;
	numString = ss.str();
	return numString;
}
/* ------------------------------------------- */
const std::string& Fizz(int /*n*/) {
	return STR_FIZZ;
}
/* ------------------------------------------- */
const std::string& Buzz(int /*n*/) {
	return STR_BUZZ;
}
/* ------------------------------------------- */
const std::string& FizzBuzz(int /*n*/) {
	return STR_FIZZBUZZ;
}

/*　-----------------------------------------------------------
 * main func.
 * ----------------------------------------------------------*/
/* ------------------------------------------- */
const std::string& fizzbuzz(int n) {
	const std::string& (*func[])(int) = {
		IntToString,
		Fizz,
		Buzz,
		FizzBuzz,
	};

	int type = 0;
	if (!(n % 3)) {
		type += 1;
	}
	if (!(n % 5)) {
		type += 2;
	}
	return func[type](n);
}

