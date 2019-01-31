/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 19:21:20 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/30 19:24:20 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len) 
{  
 	unsigned int i; 
	unsigned int n; 

	i = 0;

	if(needle[0] == '\0') 
	{ 
		return ((char *)haystack); 
	} 	

	while(haystack[i] != '\0' && i < len)
	{ 
		n = 0; 
		
		while( needle[n] == haystack[i + n] && ( i + n ) < len  ) 
		{ 
			if( needle[n + 1] == '\0')
			{ 
				return ((char *) haystack + i); 
			} 
			n++;
		} 
		i++;
	} 
	return (NULL);
} 
