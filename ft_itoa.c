/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:40:42 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/04 22:52:03 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill_digit(char *str, long n, size_t i)
{
	str[i] = '\0';
	i--;
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
}

size_t	count_len(long n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	frag;
	size_t	len;
	size_t	i;
	char	*str;
	long	nb;

	nb = (long)n;
	len = count_len (nb);
	frag = 0;
	if (nb < 0)
	{
		nb = -nb;
		frag = 1;
	}
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = len;
	fill_digit (str, nb, i);
	if (frag == 1)
		str[0] = '-';
	return (str);
}
