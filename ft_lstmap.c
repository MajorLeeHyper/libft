/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelson <dnelson@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 12:24:53 by dnelson           #+#    #+#             */
/*   Updated: 2017/08/02 15:32:47 by dnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*new2;

	if (!lst)
		return (NULL);
	new2 = f(lst);
	new = new2;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new2->next = f(lst)))
		{
			free(new2->next);
			return (NULL);
		}
		new2 = new2->next;
	}
	return (new);
}
