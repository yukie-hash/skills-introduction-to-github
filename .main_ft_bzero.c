
#include <strings.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	unsigned char	s1[] = "aaaaa";
	unsigned char	s2[] = "aaaaa";

	bzero (&s1[2], 3);
	bzero (&s2[2], 3);
	printf ("%s\n", s1);
	printf ("%s\n", s2);
}
