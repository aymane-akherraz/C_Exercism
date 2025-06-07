#include "two_fer.h"

void two_fer(char *buffer, const char *name)
{
	char *s = "One for %s, one for me.";

	if (name)
		sprintf(buffer, s, name);
	else
		sprintf(buffer, s, "you");
}
