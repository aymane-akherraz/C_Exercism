#include "dnd_character.h"

#define RAND ((rand() % 6) + 1)

int ability(void)
{
	int i = 0;
	int score = 0;
	int min = RAND;

	while (i < 3)
	{
		int tmp = RAND;
		if (tmp < min)
		{
			score += min;
			min = tmp;
		}
		else
			score += tmp;
		i++;
	}
	return (score);
}

int modifier(int score)
{
	return (floor((score - 10) / 2.0));
}

dnd_character_t make_dnd_character(void)
{
	dnd_character_t	hero;

	hero.strength = ability();
	hero.dexterity = ability();
	hero.constitution = ability();
	hero.intelligence = ability();
	hero.wisdom = ability();
	hero.charisma = ability();
	hero.hitpoints = 10 + modifier(hero.constitution);
	return (hero);
}
