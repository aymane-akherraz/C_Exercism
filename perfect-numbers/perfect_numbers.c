#include "perfect_numbers.h"

static int	sum_of_proper_divisors(int n)
{
	int	i = 2;
	int	sum = 1;
	int	sqrt_n = sqrt(n);

	while (i <= sqrt_n)
	{
		if (n % i == 0)
		{
			sum += i;
			if (i != n / i)
				sum += n / i;
		}
		i++;
	}
	return (sum);
}

int	classify_number(int n)
{
	if (n <= 0)
		return (ERROR);
	if (n == 1)
		return (DEFICIENT_NUMBER);
	int	aliquot_sum = sum_of_proper_divisors(n);
	if (n == aliquot_sum)
		return (PERFECT_NUMBER);
	if (n < aliquot_sum)
		return (ABUNDANT_NUMBER);
	return (DEFICIENT_NUMBER);
}
