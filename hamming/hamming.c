#include "hamming.h"

int	compute(const char *lhs, const char *rhs)
{
	int i = 0;
	int diff = 0;

	while (lhs[i] && rhs[i])
	{
		if (lhs[i] != rhs[i])
			diff++;
		i++;
	}
	if (lhs[i] || rhs[i])
		return (-1);
	return (diff);
}
