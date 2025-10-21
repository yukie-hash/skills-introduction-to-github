
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	int	*arr1;
	int	*arr2;
	size_t	nmemb;
	size_t	size;

	nmemb = 7;
	size = SIZE_MAX;
	arr1 = calloc(nmemb, size);
	arr2 = ft_calloc(nmemb, size);
	if (memcmp (arr1, arr2, nmemb * size) == 0)
    	printf("OK: same contents\n");
	else
    	printf("NG: different contents\n");
}
