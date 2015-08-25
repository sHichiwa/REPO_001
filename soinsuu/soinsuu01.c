/*************************/
/*  Prime factorization  */
/*************************/
#include <stdio.h>
#include <stdlib.h> 3A

void soinsuu( int targetNumber )
{
	int   n;		// Integer
	int   ns=2;		// Prime factor
	int   j;		// Multiplier

	for( n=targetNumber, ns=2; n>=ns; ns++ )
	{
		for( j=0; n%ns==0; j++ )            // Contiune until the number can be divided
		{
			n/=ns;
		}

		if ( j==0 ) continue;               // the number can be divided anymore

		printf("Prime factor: %d  Multiplier: %d\n",ns ,j);
	}
}
