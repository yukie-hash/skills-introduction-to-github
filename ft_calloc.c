/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:24:50 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/08 21:54:33 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*dst;
	size_t			i;

	if ((nmemb == 0) || (size == 0))
	{
		nmemb = 1;
		size = 1;
	}
	if (size > SIZE_MAX / nmemb)
		return (NULL);
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
