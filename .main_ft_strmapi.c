
#include <stdio.h>
#include "libft.h"

char	test_toupper(unsigned int i, char c)
{
	(void)i;
	if ((c >= 97) && (c <= 122))
		return (c - 32);
	else
		return (c);
}

int	main(void)
{
	printf ("%s", ft_strmapi ("abcdefg", test_toupper));
}
