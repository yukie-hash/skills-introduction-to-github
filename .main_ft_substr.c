
#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf ("%s\n", ft_substr ("abcdefghijk", 3, 5));
	printf ("%s\n", ft_substr ("abcdefghijk", 15, 5));
	printf ("%s\n", ft_substr ("abcdefghijk", 3, 0));
	printf ("%s", ft_substr ("abcdefghijk", 3, 15));
}
