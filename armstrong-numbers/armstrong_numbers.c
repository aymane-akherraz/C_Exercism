#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate)
{
	if (candidate < 0)
		return (false);
	if (candidate < 10)
		return (true);
	int result = 0;
	int n = candidate;
	int num_of_digits = log10(candidate) + 1;
	while (n)
	{
		result += pow(n % 10, num_of_digits);
		n /= 10;
	}
	return (result == candidate);
}
