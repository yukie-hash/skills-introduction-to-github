/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:24:50 by yhamada           #+#    #+#             */
/*   Updated: 2025/10/21 17:52:30 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*dst;
	int				i;

	i = 0;
	dst = malloc((nmemb * size));
	if (dst == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
