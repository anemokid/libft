/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 01:54:13 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/29 22:31:29 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) 
{ 
	char *new_string; 
	int i; 

	i = 0; 
	if( !s1 || !s2)
	{
	   return (NULL);	
	}

	new_string = (char *)malloc(sizeof(ft_strlen(s1) + ft_strlen(s2) + 1));

	if( new_string == NULL)
	{ 
		return (NULL);
	} 

	while(*s1)
	{ 
		new_string[i] = *s1; 
		i++; 
		s1++; 
	} 

	while(*s2)
	{ 
		new_string[i] = *s2; 
		i++; 
		s2++; 
	} 

	new_string[i] = '\0'; 
	return (new_string); 
		
} 
