#include "queen_attack.h"

static inline bool is_off_board(position_t piece)
{
	return (piece.row > 7 || piece.column > 7);
}

static inline bool is_same_row(position_t p1, position_t p2)
{
	return (p1.row == p2.row);
}

static inline bool is_same_column(position_t p1, position_t p2)
{
	return (p1.column == p2.column);
}

static inline bool is_same_position(position_t p1, position_t p2)
{
	return (is_same_row(p1, p2) && is_same_column(p1, p2));
}

static inline bool is_same_diagonal(position_t p1, position_t p2)
{
	return (abs(p2.row - p1.row) == abs(p2.column - p1.column));
}

attack_status_t	can_attack(position_t queen_1, position_t queen_2)
{
	if (is_off_board(queen_1) || is_off_board(queen_2)
		|| is_same_position(queen_1, queen_2))
		return (INVALID_POSITION);
	if (is_same_row(queen_1, queen_2) || is_same_column(queen_1, queen_2)
		|| is_same_diagonal(queen_1, queen_2))
		return (CAN_ATTACK);
	else
		return (CAN_NOT_ATTACK);
}
