
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	unsigned char	c;

	c = 33;
	printf ("%d\n", isalpha (c));
	printf ("%d\n", ft_isalpha (c));
}