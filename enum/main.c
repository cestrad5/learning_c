#include <stdio.h>
#include <stdlib.h>

/**
* This is an example of the use of enum
*
*/


enum weekdays
{
    Sunday = 10,
    Monday = 15,
    Tuesday = 0,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

enum special
{
    azz = 100,
    bzz = 200,
    czz = 300,
    xzz = 400
};

int main()
{
    printf("%d\n", Monday);
    return 0;
}
