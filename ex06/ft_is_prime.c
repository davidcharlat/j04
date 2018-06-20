int	ft_is_prime(int nb)
{
	int div;
	int is_prime;

	div = 3;
	is_prime = 1;

	if (nb < 2)
		is_prime = 0;
	else if (nb > 3)
	{	
		if ((nb % 2) == 0)
			is_prime = 0;
		while((div * div < nb) && (is_prime == 1))
		{
			if ((nb % div) == 0)
				is_prime = 0;
			div = div + 2;
		}	
	}
	return (is_prime); 	
}
