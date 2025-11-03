
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	**words;
	size_t	i;

	i = 0;
	words = ft_split ("AAbbBBbbC", 'b');
	while (words[i])
	{
		printf ("%s\n", words[i]);
		i++;
	}
}
