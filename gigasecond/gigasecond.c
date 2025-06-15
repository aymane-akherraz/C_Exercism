#include "gigasecond.h"

void gigasecond(time_t input, char *output, size_t size)
{
	time_t one_gigasec_later = input += 1e9;
	strftime(output, size, "%Y-%m-%d %H:%M:%S", gmtime(&one_gigasec_later));
}
