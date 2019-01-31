/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:03:04 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/28 15:42:45 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h" 

char *ft_strstr(const char *haystack, const char *needle)
{
	const char *str1; 
	const char *str2; 
	
	if ( *needle == '\0')
	{ 
		return ((char *)haystack); 
	}
	
	while(*haystack != '\0' ) 
	{
		str1 = haystack; 
		str2 = needle; 
		
		while((*str2 != '\0') && (*str1 == *str2))
		{
			str1 ++; 
			str2++; 
		}	
 
		if(*str2 == '\0' )
		{
			return ((char *) haystack); 
		} 
		haystack++; 
	}	
	return (NULL); 

}
