#include <stdio.h>
#include "ft_iterative_factorial.h"

void main ()
{
		int i;
		
		i = -2;
		while (i < 20)
			printf("%d ", ft_iterative_factorial(i++));
}	

