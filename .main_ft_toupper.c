
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	s1;
	int	s2;

	s1 = 'a';
	s2 = 'a';
	printf ("%c\n", toupper (s1));
	printf ("%c", ft_toupper (s2));
}
