int ft_recursive_factorial (int nb)
{
	int pred;
	
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		pred = ft_recursive_factorial (nb - 1);
		if (pred == (nb * pred)/nb)
			return (pred * nb);
		else
			return (0);
	}
}
