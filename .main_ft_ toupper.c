
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	s1;
	int	s2;

	s1 = 'C';
	s2 = 'C';
	printf ("%d\n", tolower (s1));
	printf ("%d", ft_tolower (s2));
}
