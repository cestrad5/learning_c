#include <stdio.h>
#include <stdlib.h>

/**
* The first part only uses struc
* The second part uses typedef struct to facilitate the calling of the stryct
* to call the struct in the second part we just need to call coordenates intead of struct points
*/


struct points
{
    int x , y, z;
};

int main()
{
    struct points q = {1, 2, 3}, w = {4 , 5, 6}, e = {7, 8, 9};

    printf("(%d %d %d)\n", q.x, q.y, q.z);
    printf("(%d %d %d)\n", w.x, w.y, w.z);
    printf("(%d %d %d)\n", e.x, e.y, e.z);

    return 0;
}


/*
typedef struct points
{
    int x , y, z;
} coordenates;

int main()
{
    coordenates q = {1, 2, 3}, w = {4 , 5, 6}, e = {7, 8, 9};

    printf("(%d %d %d)\n", q.x, q.y, q.z);
    printf("(%d %d %d)\n", w.x, w.y, w.z);
    printf("(%d %d %d)\n", e.x, e.y, e.z);

    return 0;
}
*/
