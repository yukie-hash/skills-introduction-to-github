
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	s1;
	int	s2;

	s1 = 'A';
	s2 = 'A';
	printf ("%c\n", tolower (s1));
	printf ("%c", ft_tolower (s2));
}
