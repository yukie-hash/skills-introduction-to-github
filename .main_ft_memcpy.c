
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst1[] = "aaaaa";
	char	dst2[] = "aaaaa";
	char	src[] = "ccc";
	size_t	n = 1;

	memcpy(dst1 + 2, src, n);
	ft_memcpy(dst2 + 2, src, n);
	printf ("%s\n", dst1);
	printf ("%s\n", dst2);
}
