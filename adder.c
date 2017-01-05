#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("x is ");
    int x = get_int();
    printf("y is ");
    int y = get_int();
    printf("the sum of  %i and %i is %i\n", x, y, x + y);
    printf("the substract of  %i and %i is %i\n", x, y, x - y);
    printf("the product of  %i and %i is %i\n", x, y, x * y);
    printf("the division of  %i and %i is %i\n", x, y, x / y);
}
