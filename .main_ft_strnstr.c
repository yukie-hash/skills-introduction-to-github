
#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

int	main(void)
{
	printf ("%s\n", strnstr ("aaa", "a", -1));
	printf ("%s\n", strnstr ("aaabbb", "aab", 6)); //bbb
	printf ("%s\n", strnstr ("aaabbb", "\0", 5)); //aaabbb
	printf ("%p\n", strnstr ("aaabbb", "c", 5));  //NULL
	printf ("%p\n", strnstr ("aaa bbb", "bb", 5));//NULL
	printf ("%p\n\n", strnstr ("aaabbb", "bb", 4)); //NULL
	printf ("%p\n", ft_strnstr ("", "", 100));
	printf ("%s\n", ft_strnstr ("aaabbb", "aaabbb", 1)); //bbb
	printf ("%s\n", ft_strnstr ("aaabbb", "\0", 5)); //aaabbb
	printf ("%p\n", ft_strnstr ("aaabbb", "c", 5));  //NULL
	printf ("%p\n", ft_strnstr ("aaa bbb", "bb", 5));//NULL
	printf ("%p\n", ft_strnstr ("aaabbb", "bb", 4)); //NULL
}
