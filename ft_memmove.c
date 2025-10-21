/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:15:03 by yhamada           #+#    #+#             */
/*   Updated: 2025/10/19 15:48:45 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*uc_dst;

	uc_dst = (unsigned char *)dst;
	tmp = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		uc_dst[i] = tmp[i];
		i++;
	}
	return (dst);
}
