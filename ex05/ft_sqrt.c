int	sqrttest (int nb, int sup, int inf)
{
	int mid;

	mid = (sup + inf) / 2;
	
	if ((mid * mid) == nb)
		return (mid);
	else if ((mid * mid) < nb)
	{
		if ((mid + 1) * (mid + 1) > nb)
			return (0);
		else if ((mid + 1) * (mid + 1) == nb)
			return (mid + 1);
		else
			return (sqrttest (nb, sup, mid));
	}
	else if ((mid * mid) > nb)
		return (sqrttest (nb, mid, inf));
}

int ft_sqrt (int nb)
{
	if (nb < 1)
		return (0);
	return (sqrttest (nb, nb, 0));
}
