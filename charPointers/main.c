#include <stdio.h>
#include <stdlib.h>

/**
* This progrma uses a pointer to store some characters secuences and them displays all the values
*
*/

int main()
{
    int i = 0, psize;

    char *p[] = {"This", "is", "a", "pointer", "of", "chars", "no more"};
    psize = sizeof(p)/sizeof(char *);
    for (i = 0; i < psize; i++)
        printf("%s\n", p[i]);
    printf("\n");

}
