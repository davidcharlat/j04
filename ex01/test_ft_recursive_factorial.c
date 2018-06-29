#include <stdio.h>

int	ft_recursive_factorial (int n);

int main ()
{
		int i;
		int sum;
		int fact;
		
		i = -2;
		sum = 0;
		while (i < 10)
		{
			fact = ft_recursive_factorial(i++);
			sum = sum + fact;
			printf("%d ", fact);
		}
		printf("\n%d\n", sum);
		return (sum - 409110);			
}	

