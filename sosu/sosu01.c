/************************/
/*  Search Prime Number */
/*           sosu01.c   */
/************************/
#include <stdio.h>
#include <stdlib.h>

int main( void )
/*----------------*/
/*  Main Program  */
/*----------------*/
{
    int   i,iS,iE;
    int   j,kosu;
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

    for( i=iS,kosu=0; i<=iE; i++ )
     {
       for( j=2; j<i; j++ )
         { if ( i%j==0 ) break; }           // Divisible

       if ( j==i )                          // Indivisible
         {
           if ( kosu%10==0 ) printf("\n");  // Insert return code every 10
           printf("%6d,",i);                // Output prime number 6Digit
           kosu++;
         }
     }

    printf("\n\n Prime Number: %d are found\n",kosu);

    return 0;
}
