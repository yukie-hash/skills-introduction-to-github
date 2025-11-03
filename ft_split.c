/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c      　                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamada <yhamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:10:40 by yhamada           #+#    #+#             */
/*   Updated: 2025/11/03 21:13:27 by yhamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*word_dup(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while ((s[i] != c) && (s[i]))
		i++;
	str = malloc (sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while ((s[i] != c) && (s[i]))
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	free_dst(char**dst, size_t word)
{
	size_t	i;

	i = 0;
	while (i < word)
	{
		free (dst[i]);
		i++;
	}
	free (dst);
}

char	**make_strs(char const *s, char c, char **dst)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if ((s[i] != c) && ((i == 0) || (s[i - 1] == c)))
		{
			dst[k] = word_dup (&s[i], c);
			if (!dst[k])
			{
				free_dst (dst, k);
				return (NULL);
			}
			k++;
		}
		i++;
	}
	dst[k] = NULL;
	return (dst);
}

size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c) && ((i == 0) || (s[i - 1] == c)))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**dst;

	words = word_count (s, c);
	dst = malloc (sizeof(char *) * (words + 1));
	if (!dst)
		return (NULL);
	make_strs (s, c, dst);
	return (dst);
}
