/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 12:20:06 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/30 19:31:31 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h""

void *ft_memalloc(size_t size)
{
	void *mem; 
	
	mem = malloc(size); 
  
	if(mem == NULL)
	{
		return NULL;
	}	

	ft_memset(mem, 0, size);
	
	return (mem); 
}
