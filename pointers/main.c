#include <stdio.h>
#include <stdlib.h>

/*
* The function assigns a value of 9 to x.
* Then modify its value using the x pointer
*/



void change (int *y);

int main (void)
{
    int x = 9;
    printf("the value of x is %d\n", x);
    change(&x);
    printf("after change the value of x is %d", x);

    return 0;

}

void change(int *y)
{
    *y = 6;
}
