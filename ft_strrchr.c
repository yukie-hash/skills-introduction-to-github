/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:34:25 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/08 21:30:28 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	i = ft_strlen (s);
	while ((int)i >= 0)
	{
		if (s[i] != (unsigned char)c)
			i--;
		else
			return ((char *)&s[i]);
	}
	return (NULL);
}
