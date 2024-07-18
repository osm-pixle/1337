int ft_recursive_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return 0;
	}
	else
	{
		while (i < power)
		{
			result = nb * ft_recursive_power(nb, power - 1);
			return (result);
		}
	}
}
