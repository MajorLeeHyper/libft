/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 14:38:10 by dnelson           #+#    #+#             */
/*   Updated: 2016/12/09 11:11:27 by dnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

static size_t	word_count(char *str, char c)
{
	size_t		i;
	size_t		words;
	int		toggle;

	i = 0;
	words = 0;
	toggle = 1;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		if (toggle == 1 && str[i] != c)
		{
			toggle = 0;
			words++;
		}
		else if (toggle == 0 && str[i] == c)
			toggle = 1;
		i++;
	}
	return (words + 1);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t		j;
	size_t		k;
	char		**array;

	if (!s)
		return (NULL);
	k = 0;
	if (!(array = (char**)malloc(sizeof(char*) * (word_count((char*)s, c)))))
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			array[k] = ft_strnew(ft_strlenc((char*)s, c));
			while (*s && *s != c)
				array[k][j++] = *s++;
			array[k++][j] = '\0';
		}
	}
	array[k] = NULL;
	return (array);
}
