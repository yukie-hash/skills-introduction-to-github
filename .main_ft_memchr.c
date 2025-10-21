
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf ("%s\n", (char *)memchr ("aaabbb", 'b', 5));
	printf ("%s", (char *)ft_memchr ("aaabbb", 'b', 5));
}
