#include "raindrops.h"

static const t_sound sounds[] = {
	{3, "Pling"},
	{5, "Plang"},
	{7, "Plong"},
	{0, NULL}
};

void convert(char result[], int drops)
{
	int i = 0;
	while (sounds[i].factor)
	{
		if (drops % sounds[i].factor == 0)
			strcat(result, sounds[i].sound);
		i++;
	}
	if (*result == '\0')
		sprintf(result, "%d", drops);
}
