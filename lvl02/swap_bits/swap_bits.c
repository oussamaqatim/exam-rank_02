// Passed Moulinette 2019.09.02

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char result;
	unsigned char left;
	unsigned char right;

	left = octet >> 4;
	right = octet << 4;
	result = left | right;
	return (result);
}

//--------------------------------------------------------------
// #include <stdio.h>
// int				main(void)
// {
// 	unsigned char test = 192;
// 	printf("Should be 12: %d\n", swap_bits(test));
// }