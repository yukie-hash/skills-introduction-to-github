/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:15:03 by yhamada           #+#    #+#             */
/*   Updated: 2025/10/21 21:53:57 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*uc_src;
	unsigned char	*uc_dst;

	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	i = 0;
	if (uc_dst < uc_src)
	{
		while (i < n)
		{
			uc_dst[i] = uc_src[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while ((int)i >= 0)
		{
			uc_dst[i] = uc_src[i];
			i--;
		}
	}
	return (dst);
}
