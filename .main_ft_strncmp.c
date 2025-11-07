
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = "128";
	s2 = "1";
	n = 9;
	printf ("%d\n", strncmp (s1, s2, n));
	printf ("%d\n", ft_strncmp (s1, s2, n));
}
