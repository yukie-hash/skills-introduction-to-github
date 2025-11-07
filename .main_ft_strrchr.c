
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*str1 = "abbbccc";
	const char	*str2 = "abbbccc";
	char		*schr1;
	char		*schr2;
	char		null[] = "NULL";

	schr1 = strrchr(str1, 'a');
	if (!(schr1))
		printf ("%s\n", null);
	else
		printf ("%s\n", schr1);
	schr2 = ft_strrchr(str2, 'a');
	if (!(schr2))
		printf ("%s\n", null);
	else
		printf ("%s\n", schr2);
}
