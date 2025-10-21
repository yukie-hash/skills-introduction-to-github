
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	unsigned char	c;

	c = '9';
	printf ("%d\n", isprint (c));
	printf ("%d", ft_isprint (c));
}
