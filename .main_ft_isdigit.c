
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	unsigned char	c;

	c = 8;
	printf ("%d\n", isdigit (c));
	printf ("%d", ft_isdigit (c));
}
