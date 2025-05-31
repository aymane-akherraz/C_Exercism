#include "darts.h"

const float INNER_RING = 1.0f;
const float MIDDLE_RING = 5.0f;
const float OUTER_RING = 10.0f;

static float distance_from_origin(float x, float y)
{
	return (sqrt(x * x + y * y));
}

uint8_t	score(coordinate_t point)
{
	float distance = distance_from_origin(point.x, point.y);
	if (distance <= INNER_RING)
		return (10);
	else if (distance <= MIDDLE_RING)
		return (5);
	else if (distance <= OUTER_RING)
		return (1);
	return (0);
}
