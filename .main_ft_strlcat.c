
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst[] = "Hell";
	char	src[] = "World";
	size_t	size = 6;

	printf ("%ld\n", ft_strlcat(dst, src, size));
	printf ("%s", dst);
}
