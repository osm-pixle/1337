int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;
	
	result = 1;
	i = 0;
	if (power == 0)
	{
		return (1);
	}
	else if(power < 0)
	{
		return (0);
	}
	else
	{
		while (i < power)
		{
			result  *= nb;
			i++;
		}
		return (result);
	}
}
