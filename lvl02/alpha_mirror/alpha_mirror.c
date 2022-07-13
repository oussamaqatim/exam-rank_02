#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			char a = argv[1][i];
			if (a >= 'A' && a <= 'Z')
				a = 'M' - (a - 'N');
			else if (a >= 'a' && a <= 'z')
				a = 'm' - (a - 'n');
			write(1, &a, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}		
