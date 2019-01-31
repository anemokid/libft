/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:39:20 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/30 19:26:31 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *string, int c )
{
	size_t s_len; 
   	char ch; 
	char *s_ptr; 

	s_ptr = (char *)string;
	ch = (char)c; 
	s_len = ft_strlen(string); 

	if( s_ptr[s_len] == ch)
	{ 
		return( s_ptr + s_len); 
	} 	
	
	while(s_len != 0) 
	{
		if( s_ptr[s_len] == ch)
		{ 
			return (s_ptr + s_len); 
		} 
		s_len--; 
	}
	return (NULL);
}
