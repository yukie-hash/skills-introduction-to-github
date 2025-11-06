/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:14:43 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/06 22:55:52 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	j;
	size_t	sum_len;

	dst_len = ft_strlen (dst);
	if (size < dst_len)
		return (size + ft_strlen (src));
	j = 0;
	while ((dst_len + j + 1 < size) && (src[j]))
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	if (dst_len < size)
		dst[dst_len + j] = '\0';
	sum_len = dst_len + ft_strlen (src);
	return (sum_len);
}
