/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 01:49:07 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/29 22:34:11 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{ 
	char *new_string; 
	size_t i; 

	if(!s)
	{ 
		return (NULL);
	} 

	new_string = (char *)malloc(sizeof(char) * (len + 1));

	if( !new_string)
	{ 
		return (NULL);
	} 

	i = 0; 
	while( i < len) 
	{
	   	new_string[i] = s[start + i]; 
   		i++;	   
	} 

	new_string[i] = '\0'; 
	return (new_string); 
} 
