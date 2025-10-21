
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst[10];
	char	src[] = "abcdefg";
	size_t	size = 3;

	printf ("%ld\n", ft_strlcpy(dst, src, size));
	printf ("%s", dst);
}
