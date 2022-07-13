#include <unistd.h>

int		main(int	ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			char a = av[1][i];
			if (a >= 'a' && a <= 'z')
				a -= 32;
			else if (a >= 'A' && a <= 'Z')
				a += 32;
			write(1, &a, 1);
			i++;	
		}
	}
	write(1, "\n", 1);
}
