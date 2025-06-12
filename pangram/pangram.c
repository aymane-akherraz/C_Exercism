#include "pangram.h"

bool is_pangram(const char *sentence)
{
	if (!sentence)
		return (false);

	int	i = 0;
	int	bits = 0;
	while (sentence[i])
	{
		if (isalpha(sentence[i]))
		{
			bits |= 1 << (tolower(sentence[i]) - 'a');
			if (bits == 0x3FFFFFF)
				return (true);
		}
		i++;
	}
	return (false);
}
