/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:45:51 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/06 23:34:52 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int			i;

	if (!str)
		return (NULL);
	i = 0;
	while (str)
	{
		if (str[i] != c)
			i++;
		else
			return ((char *) &str[i]);
	}
	if (c == '\0')
		return ((char *) &str[i]);
	else
		return (NULL);
}
