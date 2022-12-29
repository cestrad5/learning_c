#include <stdio.h>
#include <stdlib.h>

typedef struct coordenates
{
    int x, y;
} coor;

void printcoor(const coor *p);

int main()
{
    coor p[3] = { {3, 4}, {5, 6}, {7, 8}};
    int i;

        for (i = 0; i < 3; i++)
        printcoor(&p[i]);

    return 0;
}

void printcoor(const coor *p)
{
   printf("(%d   %d)\n", p->x, p->y);
}
