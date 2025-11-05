
#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd1;

	fd1 = 0;
	fd1 = open (".file_ft_putnbr_fd", O_WRONLY);
	if (fd1 == -1)
		return 1;
	ft_putnbr_fd (-2147483648, fd1);
	close (fd1);
}
