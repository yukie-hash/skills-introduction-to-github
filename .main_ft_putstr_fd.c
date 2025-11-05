
#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd1;

	fd1 = 0;
	fd1 = open (".file_ft_putstr_fd", O_WRONLY);
	if (fd1 == -1)
		return 1;
	ft_putstr_fd ("ABCDEFG", fd1);
	close (fd1);
}
