#include "collatz_conjecture.h"

int steps(int start)
{
	int steps_count = 0;

	if (start <= 0)
		return ERROR_VALUE;
	while (start != 1)
	{
		if (start % 2)
			start = (start * 3) + 1;
		else
			start >>= 1;
		steps_count++;
	}
	return (steps_count);
}
