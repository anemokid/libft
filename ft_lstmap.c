/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 15:53:56 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/29 22:27:19 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{ 
	t_list *new; 
	t_list *list; 

	if(!lst) 
	{ 
		return (NULL);
	} 

	list = f(lst); 
	new = list; 

	while(lst->next)
	{ 
		lst = lst->next; 
		if(!(list->next == f(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next; 
	}
	return (new); 
} 
