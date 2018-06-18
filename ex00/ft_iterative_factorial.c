int	ft_iterative_factorial (int nb)
{
	int counter;
	int result;
	double copyresult;

	counter = 1;
	result = 1;
	copyresult = 1;

	if (nb>0)
	{
	while ((counter <= nb) && (result == copyresult))
		{
			result = result * counter;
			copyresult = copyresult * counter;
			counter++;
		}
		if (result == copyresult)
			return (result);
		else return (0);
	}
	else return (0);
}



