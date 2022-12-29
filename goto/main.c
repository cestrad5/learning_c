#include <stdio.h>
#include <stdlib.h>

/*Goto jumps to the lable we decide like hello3, hello4*/

int main()
{
hello1:
    printf("Hello 1!\n");
    goto hello3;
hello2:
    printf("Hello 2!\n");
hello3:
    printf("Hello 3!\n");
hello4:
    printf("Hello 4!\n");

    return 0;
}
