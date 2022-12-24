#include <stdio.h>
#include <stdlib.h>


/**
*   The function will as for an integer
*   It will print the number value if it is between 0 and 5
*
*/
int main()
{
    int x;

    while (1)
    {
    printf("Enter an integer: ");
    scanf("%d", &x);
    if (x > 5)
        printf("The value of x is > 5\n");
    else if (x < 0)
            printf("The value of x is < 0\n");
        else
            printf("The value of x is %i\n", x);
    }
return 0;
}
