#include "isogram.h"

bool is_isogram(const char phrase[])
{
	if (!phrase)
		return (false);
	int i = 0;
	int bits = 0;
	while (phrase[i])
	{
		if (isalpha(phrase[i]))
		{
			int position = 1 << (tolower(phrase[i]) - 'a');
			if (bits & position)
				return (false);
			bits |= position;
		}
		i++;
	}
	return (true);
}
