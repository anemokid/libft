/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 15:51:55 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/27 15:53:49 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while(lst != NULL)
	{ 
		f(lst); 
		lst = lst->next; 
	} 
}
