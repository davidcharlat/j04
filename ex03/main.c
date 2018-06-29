#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power > 0)
		return nb * (ft_recursive_power(nb, power-1));
	else
		return (nb);	
}

void main(int a, int b)
{ printf ("%d", ft_recursive_power(3,3));}
