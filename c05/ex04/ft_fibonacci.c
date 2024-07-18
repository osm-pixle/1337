int	ft_fibonacci(int index)
{
	int	i;
	int	fib;

	i = 0;
	if (index < i)
	{
		return (-1);
	}
	else if (index < 2)
	{
		return (index);

	}
	else
	{
		fib = (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
		return (fib);
	}
}
