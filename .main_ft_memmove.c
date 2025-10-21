
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst1[] = "abcdefgh";
	char	dst2[] = "abcdefgh";
	size_t	n = 3;

	memmove(dst1 + 2, dst1, n);
	ft_memmove(dst2 + 2, dst2, n);
	printf ("%s\n", dst1);
	printf ("%s\n", dst2);
}
