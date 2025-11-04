
#include <stdio.h>
#include "libft.h"

char	toupper(unsigned int, char)
{
	if ((c >= 97) && (c <= 122))
		return (c - 32);
	else
		return (c);
}

int	main(void)
{
	printf ("%s", ft_mapi ("abcgefg", toupper (3, g)));
}
