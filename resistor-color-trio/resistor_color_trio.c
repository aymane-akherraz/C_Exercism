#include "resistor_color_trio.h"

resistor_value_t	color_code(resistor_band_t colors[static 3])
{
	resistor_value_t	r_val = {0, 0};

	if (colors[0] == 0 && colors[1] == 0)
		return (r_val);
	uint64_t total = (colors[0] * 10 + colors[1]) * pow(10, colors[2]);
	int unit = colors[1] == 0? colors[2] + 1 : colors[2];
	if (unit < 3)
	{
		r_val.unit = OHMS;
		r_val.value = total;
	}
	else if (unit < 6)
	{
		r_val.unit = KILOOHMS;
		r_val.value = total / 1e3;
	}
	else if (unit < 9)
	{
		r_val.unit = MEGAOHMS;
		r_val.value = total / 1e6;
	}
	else
	{
		r_val.unit = GIGAOHMS;
		r_val.value = total / 1e9;
	}
	return (r_val);
}
