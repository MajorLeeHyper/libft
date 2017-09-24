/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelson <dnelson@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:19:52 by dnelson           #+#    #+#             */
/*   Updated: 2017/08/02 15:49:52 by dnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = ft_strlen(s1);
	j = 0;
	new = ft_strnew(i);
	while (j < i)
	{
		new[j] = s1[j];
		j++;
	}
	new[j] = '\0';
	return (new);
}
