#include <stdio.h>
#include <stdlib.h>

/**
* This function will show the multiplication tables from 1 to 10
*
*/

int main()
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <=10; j++)
            printf("%d x %d = %d\n", i, j, i * j);
    printf("\n");
    }

}
