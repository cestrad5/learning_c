#include <stdio.h>
#include <stdlib.h>

/**
* Do ... do first them ask, so it will be executed at least once
* while ask first
*/

int main()
{
int count = 0;
int n = 4;


while (count <= n) {
    printf("Hello world!\n");
    ++count;
}

count = 0;


do {
    printf("Hello world do while!\n");
    ++count;
    } while (count <= n);


return 0;
}
