/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelson <dnelson@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 13:32:57 by dnelson           #+#    #+#             */
/*   Updated: 2017/08/02 15:34:18 by dnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*test;
	size_t			i;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	test = (unsigned char *)s;
	while (n--)
	{
		if (test[i] == cc)
			return (test + i);
		i++;
	}
	return (NULL);
}
