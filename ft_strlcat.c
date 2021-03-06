/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:22:55 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/30 19:25:02 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict destination, const char * restrict source, size_t size)
{
	size_t i; 
	size_t dst_len; 
	size_t src_len;

	dst_len = ft_strlen(destination);
	src_len = ft_strlen(source); 
	
	if( size < dst_len) 
	{ 
		return( size + src_len);  
	} 	
	
	i = 0; 
	while( source[i] != '\0' && (dst_len + i + 1 ) < size) 
	{
		destination[dst_len + i] = source[i];
	   	i++; 	
	}
	destination[ dst_len + i] = '\0'; 
	return (dst_len + src_len);
}
