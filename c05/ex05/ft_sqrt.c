int	ft_sqrt(int nb)
{
	long	i;
	long	j;

	i = 2;
	j = nb;
	if (j <= 0)
	{
		return (0);
	}
	else if (j == 1)
	{
		return (j);
	}
	else iif (j >= 2)
	{
		while (i * i <= j)
		{
			if (i * i == j)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
