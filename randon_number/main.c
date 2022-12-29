#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rannn(void);

int main(void)
{
    int i, a[20];
    srand(time(NULL));
    for (i = 0; i < 20; i++)
        a[i] = rannn();
    for (i = 0; i < 20; i++)
        printf("%d ", a[i]);
    return 0;
}

int rannn()
{
    return rand() % 100 +1;
}
