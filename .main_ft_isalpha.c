
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	unsigned char	c;

	c = 'k';
	printf ("%d\n", isalpha (c));
	printf ("%d", ft_isalpha (c));
}