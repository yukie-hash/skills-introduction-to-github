
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf ("%d\n", atoi ("\0"));
	printf ("%d\n", atoi ("7 89"));
	printf ("%d\n", atoi ("-789"));
	printf ("%d\n", atoi ("+-789"));
	printf ("%d\n", atoi ("--789"));
	printf ("%d\n", atoi ("- -7"));
	printf ("%d\n\n", atoi (" -789"));
	printf ("%d\n", ft_atoi ("\0"));
	printf ("%d\n", ft_atoi ("7 89"));
	printf ("%d\n", ft_atoi ("-789"));
	printf ("%d\n", ft_atoi ("+-789"));
	printf ("%d\n", ft_atoi ("--789"));
	printf ("%d\n", ft_atoi ("- -7"));
	printf ("%d\n", ft_atoi (" -789"));
}
