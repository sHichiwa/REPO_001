/************************/
/*  Search Prime Number */
/*           sosu01.c   */
/************************/
#include <stdio.h> 4

void sosu( int start, int end )
{
    int   i,j;
    int   kosu;

    for( i=start, kosu=0; i<=end; i++ )
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
}
