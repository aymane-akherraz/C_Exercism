#include "robot_simulator.h"

robot_status_t robot_create(robot_direction_t direction, int x, int y)
{
	return (robot_status_t){.direction = direction,
		.position = {.x = x, .y = y}};
}

static void turn_right(robot_status_t *robot)
{
	if (robot->direction + 1 == DIRECTION_MAX)
		robot->direction = 0;
	else
		robot->direction++;
}

static void turn_left(robot_status_t *robot)
{
	if (robot->direction == 0)
		robot->direction = DIRECTION_WEST;
	else
		robot->direction--;
}

static void advance(robot_status_t *robot)
{
	if (robot->direction == DIRECTION_NORTH)
		robot->position.y++;
	else if (robot->direction == DIRECTION_EAST)
		robot->position.x++;
	else if (robot->direction == DIRECTION_SOUTH)
		robot->position.y--;
	else if (robot->direction == DIRECTION_WEST)
		robot->position.x--;
}

void robot_move(robot_status_t *robot, const char *commands)
{
	if (!commands)
		return ;
	int i = 0;
	while (commands[i])
	{
		if (commands[i] == 'R')
			turn_right(robot);
		else if (commands[i] == 'L')
			turn_left(robot);
		else if (commands[i] == 'A')
			advance(robot);
		i++;
	}
}
