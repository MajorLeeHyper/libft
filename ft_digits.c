/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelson <dnelson@student42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 10:02:09 by dnelson           #+#    #+#             */
/*   Updated: 2017/08/02 15:27:11 by dnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_digits(long num)
{
	int		count;

	count = 0;
	while (num > 9 || num < -9)
	{
		num /= 10;
		count++;
	}
	count++;
	return (count);
}
