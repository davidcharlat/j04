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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb + 1) == 1)
		return (nb + 1);
else
		return (ft_find_next_prime(nb + 1));
}
