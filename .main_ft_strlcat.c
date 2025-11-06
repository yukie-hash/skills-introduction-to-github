
#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst1[10] = "";
	char	src1[] = "rrrrr";
	char	dst2[10] = "";
	char	src2[] = "rrrrr";
	size_t	size = 0;
	size_t	ret1;
	size_t	ret2;

	ret1 = strlcat(dst1, src1, size);
	printf("ret1 = %zu\n", ret1);
	printf("dst1 = \"%s\"\n", dst1);
	ret2 = ft_strlcat(dst2, src2, size);
	printf("ret2 = %zu\n", ret2);
	printf("dst2 = \"%s\"\n", dst2);
}

