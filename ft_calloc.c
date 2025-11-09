/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:24:50 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/09 16:03:37 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*dst;
	size_t			i;

	if (!size || !nmemb)
		return (malloc(0));
	if (size > SIZE_MAX / nmemb)
		return (malloc(0));
	dst = malloc((nmemb * size));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
