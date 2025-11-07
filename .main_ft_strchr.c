
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*str1 = "cc";
	const char	*str2 = "cc";
	char	*schr1;
	char	*schr2;
	char	null[] = "NULL";

	schr1 = strchr(str1, '\0');
	if (!(schr1))
		printf ("%s\n",null);
	else
		printf ("%s\n", schr1);

	schr2 = ft_strchr(str2, '\0');	
	if (!(schr2))
		printf ("%s\n",null);
	else
		printf ("%s\n", schr2);
}
