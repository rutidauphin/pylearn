#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("x is ");
    float x = get_float();
    printf("y is ");
    float y = get_float();
    printf("the sum of  %.f and %.f is %.f\n", x, y, x / y);
}
