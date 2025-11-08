/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:15:03 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/08 20:11:17 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*cpy_back(unsigned char *dst, unsigned char *src, size_t n)
{
	size_t	i;

	i = n - 1;
	while ((int)i >= 0)
	{
		dst[i] = src[i];
		i--;
	}
	return (dst);
}

unsigned char	*cpy_front(unsigned char *dst, unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*uc_src;
	unsigned char	*uc_dst;

	if ((!dst) && (!src))
		return (NULL);
	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	if (uc_dst < uc_src)
		uc_dst = cpy_front (uc_dst, uc_src, n);
	else
		uc_dst = cpy_back (uc_dst, uc_src, n);
	return (dst);
}
