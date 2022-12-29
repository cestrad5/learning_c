#include <stdio.h>
#include <stdlib.h>

/**
* This program creates an array of pointes and them changes the values
* it also shows how to add values using pointes (line 17)
*/
int main()
{
    int x, q, w, e, r, s, z;
    int *a[5] = {&x, &q, &w, &e, &r};
    *a[0]= 7463;
    *a[1]= 15245;
    *a[2]= 2785;
    *a[3]= 200;
    *a[4]= 100;
    z = *a[3] + *a[4];
    s = e + r;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", x, q, w, e, r, s, z);
    return 0;
}
