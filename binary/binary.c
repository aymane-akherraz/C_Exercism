#include "binary.h"

int	convert(const char *input)
{
	int i = 0;
	int result = 0;

	while (input[i])
	{
		if (input[i] != '0' && input[i] != '1')
			return (INVALID);
		result <<= 1;
		if (input[i] == '1')
			result++;
		i++;
	}
	return (result);
}
