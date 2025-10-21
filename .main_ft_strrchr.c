
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*str1 = "aaabbbccc";
	const char	*str2 = "aaabbbccc";
	int	c;

	c = '\0';
	printf ("%s\n", strrchr (str1, c));
	printf ("%s", ft_strrchr (str2 ,c));
}
