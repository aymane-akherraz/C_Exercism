#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
{
    return ((number * (number + 1) * ((2 * number) + 1)) / 6);
}
unsigned int square_of_sum(unsigned int number)
{
    unsigned int r = (number * (number + 1)) / 2;

    return (r * r);
}
unsigned int difference_of_squares(unsigned int number)
{
    return (square_of_sum(number) - sum_of_squares(number));
}
