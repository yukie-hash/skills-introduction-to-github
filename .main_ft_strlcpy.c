
#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>

int	main(void)
{
	char	dst1[20];
	char	src1[] = "aaaaa";
	char	dst2[20];
	char	src2[] = "aaaaa";
	size_t	size = 0;

	printf ("%ld\n", strlcpy(dst1, src1, size));
	printf ("%s\n", dst1);
	printf ("%ld\n", ft_strlcpy(dst2, src2, size));
	printf ("%s", dst2);
}
