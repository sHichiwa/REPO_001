/*****************************/
/*  Prime factorization main */
/*****************************/
#include <stdio.h>
#include <stdlib.h>
#include "soinsuu01.h"

int main( void )
{
    char  c[128];
    int   n0;   //// Integer

    printf("\n[Prime factorization]\n");
    printf("\nTarget Number : ");
    fflush(stdout);
    fgets(c, 100, stdin);

    n0 = atoi(c);                    // Input Number

	soinsuu( n0 );

    return 0;
}
