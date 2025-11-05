
#include <stdio.h>
#include "libft.h"

void	test_toupper(unsigned int i, char *c)
{
	(void)i;
	if ((*c >= 97) && (*c <= 122))
		*c = *c - 32;
}

int	main(void)
{
	char	str [7] = "abcdefg";

	ft_striteri (str, test_toupper);
	printf ("%s", str);
}
