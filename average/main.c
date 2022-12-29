#include <stdio.h>
#include <stdlib.h>
/**
* The program finds the average of a series of numbers
*
*/


int main()
{
    int i;

    float numbers[5] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    float summ = 0;

    for (i = 0; i < 5; i++) {
        summ += numbers[i];
    }
    printf("average is = %f\n", summ/5);

    return 0;
}
