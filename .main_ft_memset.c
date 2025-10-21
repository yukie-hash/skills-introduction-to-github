
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

int	main(void)
{
	char	s1[] = "aaaa";
	char	s2[] = "aaaa";
	int		c;
	size_t 	n;

	c = 'b';
	n = 2;
	printf ("%p\n", memset (s1, c, n));
	printf ("%p\n", ft_memset (s2, c, n));
	printf ("%s\n", (char *)memset (s1, c, n));
	printf ("%s", (char*)ft_memset (s2, c, n));
}
