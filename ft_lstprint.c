/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelson <dnelson@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 11:36:25 by dnelson           #+#    #+#             */
/*   Updated: 2017/08/02 15:33:22 by dnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *lst)
{
	t_list	*to_print;

	to_print = lst;
	while (to_print != NULL)
	{
		ft_putstr((char*)to_print->content);
		to_print = to_print->next;
	}
}
