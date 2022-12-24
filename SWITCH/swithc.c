#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Prints a text according to the value of x*/

    int x = 5;

    switch (x) {
    case 0:
        printf("The value of x is 0");
        break;
    case 1:
        printf("The value of x is 1");
        break;
    case 2:
        printf("The value of x is 2");
        break;
    case 3:
        printf("The value of x is 3");
        break;
    case 4: case 5:
        printf("The value of x is 4 or 5");
        break;
    default:
        printf("The value must be a integer from 0 to 3, please try ones more");
        break;
    }
    return 0;
}
