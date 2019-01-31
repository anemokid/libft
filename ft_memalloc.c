/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 12:20:06 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/23 20:15:33 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "ft_memset.c"
// #include "libft.h""

void * ft_memalloc(size_t size)
{
	// pointer to mem 2 be allocated:
	void *mem; 
	//= NULL;

	// use malloc to store:
	mem = malloc(size); 
 
	// handle if mem allocation fails: 
	if(mem == NULL)
	{
		return NULL;
	}	

	// memory allocated is initialized to zero
	ft_memset(mem, 0, size);
	
	return (mem); 
}

//int main(void)
//{
//	char *pname = ft_memalloc(3);
//
//	printf("value of pname: 0:%s\npname ptr: %p",pname,&pname );
//	return(0);
//}
