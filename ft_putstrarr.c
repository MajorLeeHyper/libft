/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrarr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelson <dnelson@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 08:15:18 by dnelson           #+#    #+#             */
/*   Updated: 2017/08/02 15:47:16 by dnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrarr(char **arr)
{
	ft_putchar('[');
	if (*arr)
		ft_putstr(*arr++);
	while (*arr)
	{
		ft_putchar(',');
		ft_putchar(' ');
		ft_putstr(*arr++);
	}
	ft_putchar(']');
}
