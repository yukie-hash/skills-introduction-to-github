
#include <string.h>
#include <stdio.h>
#include "libft.h"

// int	main(void)
// {
// 	const char	*str1 = "abcde";
// 	const char	*str2 = "abcde";
// 	int	c;

// 	c = 'b';
// 	printf ("%s\n", strchr (str1, c));
// 	printf ("%s", ft_strchr (str2 ,c));
// }

int	main(void)
{
	//const char	*str1 = "";
	const char	*str2 = "";
	char	*str;
	char	null[] = "NULL";

	// if (!(str = strchr(str1, 's')))
	// 	printf ("%s\n",null);
	if (!(str = ft_strchr(str2, 's')))
        printf ("%s",null);
	else
		printf ("%s", str);
}
