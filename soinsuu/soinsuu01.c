/*************************/
/*  Prime factorization  */
/*************************/
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    char  c[128];
    int   n0,n;   //// Integer
    int   ns=2;   //// Prime factor
    int   j;      //// Multiplier

    printf("\n[Prime factorization]\n");
    printf("\nTarget Number : ");
    fflush(stdout);
    fgets(c, 100, stdin);
    n0=atoi(c);                    // Input Number

    for( n=n0,ns=2; n>=ns; ns++ )
      {
        for( j=0; n%ns==0; j++ )            // Contiune until the number can be divided
         {
           n/=ns;
         }

        if ( j==0 ) continue;               // the number can be divided anymore

        printf("Prime factor: %d  Multiplier: %d\n",ns ,j);
     }

    return 0;
}
