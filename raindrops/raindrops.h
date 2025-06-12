#ifndef RAINDROPS_H
#define RAINDROPS_H

#include <stdio.h>
#include <string.h>

typedef struct s_sound {
	int			factor;
	const char	*sound;
} t_sound;

void convert(char result[], int drops);

#endif
