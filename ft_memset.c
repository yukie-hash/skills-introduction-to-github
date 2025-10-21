/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:02:29 by yhamada           #+#    #+#             */
/*   Updated: 2025/10/17 23:28:01 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*u_s;

	u_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		u_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
