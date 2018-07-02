# include <stdio.h>

int		eight_queens_puzzle_test (int *add)
{
	int	ncol;
	int i;
	int j;

	if (add[0] < 9)
	{
		ncol = 1;
		while (ncol < 8)
		{	
			i = 1;
			while (i <= ncol)
			{
				if ((add[ncol] == add[ncol - i]) || (add[ncol] == add[ncol - i] + i) || (add[ncol] == add[ncol - i] - i))
					{
						i = 0;
						while ((add[ncol - i] == 8) && (i < ncol))
							i++;
						add[ncol - i]++;
						while ((ncol - i) < 8)	
							add[ncol - --i] = 1;
						eight_queens_puzzle_test (&add[0]);
					}
				i++;
			}
			ncol++;
		}
		i = 0;
		while (i < 8)
			printf ("%d",add[i++]);
		printf ("\n");
		while (add[i - 1] == 8)
			i--;
		add[i - 1]++;
		eight_queens_puzzle_test (&add[0]);
	}
	return (0);
}

void	ft_eight_queens_puzzle_2 (void)
{
	int	tab[8] = {1,1,1,1,1,1,1,1};
	
	eight_queens_puzzle_test (&tab[0]);	
}

int		main(void)
{
	ft_eight_queens_puzzle_2();
	return (0);
}
