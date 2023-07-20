#include "main.h"

/**
 * positive_or_negative - prints whether an integer is positive or negative
 * @i: the integer to be checked
 */
void positive_or_negative(int i)
{
    if (i > 0)
        printf("%d is positive\n", i);
    else if (i < 0)
        printf("%d is negative\n", i);
    else
        printf("%d is zero\n", i);
}

