#include <stdio.h>
#include <stdlib.h>

/**
* This probram will list the prime numbers between 2 and 20000
*
*/


int main()
{
 int i, j, is;
 for (i = 2; i < 20000; ++i){
       is = 1;
       for (j = 2; j < i; ++j){
            if (i % j == 0){
                is = 0;
                break;
        }
        }
        if (is)
        printf("%d ", i);

 }
     return 0;
}




/**
* This program will list the first 20 prime numbers starting from 2
*
*/

/*

int main()
{
 int i, j, is, count;
 count = 1;

 for (i = 2; count <= 20; ++i){
       is = 1;
       for (j = 2; j < i; ++j){
            if (i % j == 0){
                is = 0;
                break;
        }
        }
        if (is) {
        printf("%d ", i);
        count++;
        }
 }
     return 0;
}
*/
