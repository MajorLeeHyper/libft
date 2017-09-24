/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelson <dnelson@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:34:58 by dnelson           #+#    #+#             */
/*   Updated: 2017/08/02 15:47:51 by dnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c2;
	char	*s2;

	c2 = (char)c;
	s2 = (char*)s;
	while (*s2)
	{
		if (*s2 == c2)
			return (s2);
		s2++;
	}
	if (c2 == '\0')
		return (s2);
	return (NULL);
}
