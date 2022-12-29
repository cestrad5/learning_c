#include <stdio.h>
#include <stdlib.h>

/*
* This function calculates the summation of all the numbers between tow numbers
*/
int main()
{
int x, y, summ;
summ = 0;

    while (1)
    {
    printf("Enter the starting integer number: ");
    scanf("%d", &x);
    printf("Enter the ending integer number: ");
    scanf("%d", &y);

        while (x <= y){
            summ += x;
            x++;
        }
   printf("The summatory is= %d\n", summ);
   summ = 0;
   }

return 0;
}
