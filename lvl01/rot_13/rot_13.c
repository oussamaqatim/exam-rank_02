#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			char a = av[1][i];
			if (a >= 'A' && a <= 'M')
				a += 13;
			else if (a >= 'N' && a <= 'Z')
				a -= 13;
			else if (a >= 'a' && a <= 'm')
				a += 13;
			else if (a >= 'n' && a <= 'z')
				a -= 13;
			write(1, &a, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}