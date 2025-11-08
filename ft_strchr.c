/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:45:51 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/08 22:24:10 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] != (unsigned char)c)
			i++;
		else
			return ((char *) &str[i]);
	}
	if ((unsigned char)c == '\0')
		return ((char *) &str[i]);
	else
		return (NULL);
}
