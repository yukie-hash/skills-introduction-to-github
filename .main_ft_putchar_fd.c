
#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd1;

	fd1 = 0;
	fd1 = open (".file_ft_putchar_fd", O_WRONLY);
	if (fd1 == -1)
		return 1;
	ft_putchar_fd ('c', fd1);
	close (fd1);
}
