#include <stdio.h>
#include <stdlib.h>

/*
* thsi function ask for 2 integers x and y
* the result is the +, -, the integer part of the x/y
* and the module of x/y
* prints if the number is even or odd number
*/

int main()
{
    int x, y;

    while (1)
    {
    printf("Enter integer x: ");
    scanf("%d", &x);
    printf("Enter integer y: ");
    scanf("%d", &y);
    printf("X + Y =%i\n", x + y);
    printf("X - Y =%i\n", x - y);
    printf("X / Y =%d\n", x / y);
    printf("X % Y =%d\n", x % y);
    if ((x % 2) == 0)
        printf("x is an Even number\n");
    else printf("x is an Odd number\n");
        }
    return 0;
}
