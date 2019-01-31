/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 19:21:20 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/20 17:23:49 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include "ft_strlen.c"
#include "ft_strncmp.c"

char *ft_strnstr(const char *haystack, const char *needle, size_t len) 
{  
 	unsigned int i; 
	unsigned int n; 

	i = 0;

	// drop degenerate edge cases:
	if(needle[0] == '\0') 
	{ 
		return ((char *)haystack); // change to (void *) - to test
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

//int main(void)
//{ 
//	// test: 
// char t1[] = "nima widaha";
//	char t2[] = "wid";
//	size_t val = 8; 
//
//	char *ret = ft_strnstr(t1, t2, val);
//
//	printf("ptr to substring: %s: ", ret); 
//	return(0);
//} 
