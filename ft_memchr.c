/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:14:00 by yhamada           #+#    #+#             */
/*   Updated: 2025/10/19 19:49:45 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*u_s;

	u_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (u_s[i] != (unsigned char)c)
			i++;
		else
			return ((void *)&u_s[i]);
	}
	return (NULL);
}
