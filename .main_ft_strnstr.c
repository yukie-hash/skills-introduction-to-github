
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf ("%s\n", ft_strnstr ("aaabbb", "bb", 5)); //bbb
	printf ("%s\n", ft_strnstr ("aaabbb", "\0", 5)); //aaabbb
	printf ("%p\n", ft_strnstr ("aaabbb", "c", 5));  //NULL
	printf ("%p\n", ft_strnstr ("aaa bbb", "bb", 5));//NULL
	printf ("%p\n", ft_strnstr ("aaabbb", "bb", 4)); //NULL
}
