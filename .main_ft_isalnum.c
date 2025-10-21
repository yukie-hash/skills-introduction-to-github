#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	unsigned char	c;

	c = 'u';
	printf ("%d\n", isalnum (c));
	printf ("%d", ft_isalnum (c));
}
