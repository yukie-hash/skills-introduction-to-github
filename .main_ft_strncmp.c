
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = "atams\0\0\0\0";
	s2 = "atams\0omsbc";
	n = 8;
	printf ("%d\n", strncmp (s1, s2, n));
	printf ("%d\n", ft_strncmp (s1, s2, n));
}
