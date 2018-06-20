double	ft_db_fibonacci(int index)
{
	double pred;
	double pre_floor;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index == 2)
		return (1);
	else if (index == 3)
		return (2);
	else if (index == 4)
		return (3.5);
	else
	{
		pred = ft_db_fibonacci(index - 1);
		pre_floor =(double)(int)pred;
		return (pre_floor + (int)((1/(pred - pre_floor))+.5)+1/pre_floor);
	}
}

int		ft_fibonacci(int index)
{
	return ((int)ft_db_fibonacci(index));
}
