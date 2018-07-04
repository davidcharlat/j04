int	ft_is_prime(int nb)
{
	int	div;
	int	square;

	div = 1;
	square = 1;
	/*
	** Don't search passed the square root
	*/
	while (nb > square)
	{
		/*
		** fastest way to iteratively get square of integers
		** (n + 1)² = n² + 2n +1
		*/
		square += 2 * div++ + 1;
		if (nb % div == 0)
			return (0);
	}
	return (1);
}
