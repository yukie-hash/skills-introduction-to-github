/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamada <hamada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:45:51 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/07 12:44:15 by hamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int			i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
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
