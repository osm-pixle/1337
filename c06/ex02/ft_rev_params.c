#include <unistd.h>

int main(int ac, char *av[])
{
	int	i;
	int	j;

	j = ac - 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
		if (j == 0)
		{
			break;
		}
	}
	return (0);
}
