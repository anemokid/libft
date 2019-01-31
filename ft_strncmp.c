/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 18:55:23 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/30 19:22:51 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *string1, const char *string2, size_t n)
{ 
	char *s1; 
	char *s2; 
	unsigned int i; 

	s1 = (char *)string1; 
	s2 = (char *)string2; 
	i = 0; 

	while( i < n) 
	{ 
		if(*s1 < *s2)
		{ 
			return (-1); 
		} else if (*s1 > *s2 )
		{
			return(1); 
		} else if( !*s1)
		{ 
			return (0); 
		} 
	
		i++;
	} return (0); 

} 
