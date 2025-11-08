/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:33:39 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/08 18:25:57 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;
	size_t		actual_len;

	i = 0;
	if (start > ft_strlen (s))
		actual_len = 0;
	else if (len > ft_strlen(s) - start)
		actual_len = ft_strlen(s) - start;
	else
		actual_len = len;
	str = malloc (sizeof(char) * (actual_len + 1));
	if (!str)
		return (NULL);
	while ((i < actual_len) && (s[start + i]))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
