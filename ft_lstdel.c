/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 15:45:19 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/27 15:48:32 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{ 
	t_list *next; 

	while( *alst != NULL) 
	{ 
		next = (*alst)->next; 
		ft_lstdelone(alst, del);
	   *alst = next; 	
	} 
} 
