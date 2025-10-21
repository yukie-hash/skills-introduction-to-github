
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*str1 = "aaabbb";
	const char	*str2 = "aaabbb";
	int	c;

	c = 'b';
	printf ("%s\n", strchr (str1, c));
	printf ("%s", ft_strchr (str2 ,c));
}
