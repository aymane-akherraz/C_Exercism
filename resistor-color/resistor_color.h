#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H
#define COLORS \
	BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE

#include <stdint.h>

typedef enum {	
	COLORS
} resistor_band_t;

uint8_t color_code(resistor_band_t color);
const resistor_band_t *colors(void);

#endif
