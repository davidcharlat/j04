int	ft_iterative_power(int nb, int power)
{
	int pow;
	int result;

	pow = 0;
	result = 1;

	if (power < 0)
		return(0);
	else
	{
		while (pow <= power)
		{
			result = result * nb;
			pow++;
		}
		return(result);
	}
}
