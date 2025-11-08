
#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf ("%s\n", ft_substr ("abcdefghijk", 1, 3));
	printf ("%s\n", ft_substr ("abcdefghijk", 3, 0)); //lenが０の場合
	printf ("%s\n", ft_substr ("abcdefghijk", 420000, 3)); //startが長すぎて範囲外になる場合
	printf ("%s", ft_substr ("abcdefghijk", 3, 420000)); //lenが長すぎて範囲外になる場合
	}
