#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H

#include <stdint.h>
#include <math.h>

typedef enum {
	OHMS = 0,
	KILOOHMS = 3,
	MEGAOHMS = 6,
	GIGAOHMS = 9
}	unit_t;

typedef enum {
	BLACK,
	BROWN,
	RED,
	ORANGE,
	YELLOW,
	GREEN,
	BLUE,
	VIOLET,
	GREY,
	WHITE
}	resistor_band_t;

typedef struct
{
	int			unit;
	uint16_t	value;
}	resistor_value_t;

resistor_value_t	color_code(resistor_band_t colors[static 3]);

#endif
