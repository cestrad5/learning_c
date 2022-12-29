#include <stdio.h>
#include <stdlib.h>

/**
* This function convers a decimal number into a binary of maximum 1000 characters
*/

int main()
{
  int x, i, j, a[1000];

    while (1)
    {
    printf("Enter an decimal integer: ");
    scanf("%d", &x);
    i = 0;

    while   (x > 0) {
    a[i] = x % 2;
    x = x / 2;
    i++;

    }

    for (j = i -1; j >= 0 ; j-- )
        printf("%d", a[j]);
        printf("\n");

}
return 0;
}
