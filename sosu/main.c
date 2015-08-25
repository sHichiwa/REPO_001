/************************/
/*  Search Prime Number */
/*           main.c   */
/************************/
#include <stdio.h>
#include <stdlib.h>
#include "sosu01.h"

int main( void )
/*----------------*/
/*  Main Program  */
/*----------------*/
{
    int   iS,iE;
    char  c[128];

    printf("\n+-----------------------+");
    printf("\n+  Search Prime Number  +");
    printf("\n+------------------------+");

    printf("\nStart Number: ");
    fgets(c, 100, stdin);
    iS=atoi(c);                    // Input Start Number
    printf("\nEnd Number: ");
    fgets(c, 100, stdin);
    iE=atoi(c);                    // Input End Number

	sosu(iS, iE);

    return 0;
}
