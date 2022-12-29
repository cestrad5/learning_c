#include <stdio.h>-
#include <stdlib.h>

int main()
{
    int i, minor, higher;
    int numbers[5] = { -100, 1, 800, 400, -152 };
    minor = numbers[0];
    higher = minor;
    for (i = 0; i < 5; i++) {
        if (minor > numbers[i])
            minor = numbers[i];
        if (higher < numbers[i])
            higher = numbers[i];
        }

    printf("The minor number is %d and the higher is %d\n", minor, higher);
    return 0;
}
