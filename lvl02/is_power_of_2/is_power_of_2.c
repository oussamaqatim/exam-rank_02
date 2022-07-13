// the bitwise version :

int		is_power_of_2(unsigned int n)
{
    return (n > 0 && !(n & (n - 1)));
}


// ----------------------------------------------
// the basic function

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0) 
		n /= 2;
	return ((n == 1) ? 1 : 0);
}