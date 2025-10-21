/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:01:20 by yhamada           #+#    #+#             */
/*   Updated: 2025/10/19 20:11:26 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	size_t			i;

	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	i = 0;
	while (i != n)
	{
		if (u_s1[i] > u_s2[i])
		{
			return (u_s1[i] - u_s2[i]);
		}
		else if (u_s1[i] < u_s2[i])
		{
			return (u_s1[i] - u_s2[i]);
		}
		i++;
	}
	return (0);
}
