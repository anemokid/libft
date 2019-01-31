/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 02:01:30 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/29 22:34:40 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_wspace(char c)
{ 
	return (c == '\n' || c == '\t' || c == ' ');
} 

static int has_whitespace(char *str, int *i, size_t *j)
{ 
	while(is_wspace(*(str + *i)))
	{
		(*i)++;
	}
	while(is_wspace(*(str + *j)))
	{
		(*j)--; 
	}
	if((*i || *j) < ft_strlen(str))
	{
		return (1); 
	}
	return (0);
} 

char *ft_strtrim(char const *s)
{ 
	int i; 
	int k; 
	size_t j;
   	size_t new_size; 	
	char *new_string; 

	if(!s)
		return (NULL); 

	i = 0; 
	k = 0; 
	j = ft_strlen(s) - 1;

	if(!has_whitespace((char *)s, &i, &j) || !ft_strlen(s))
		return (char *)s; 

	new_size = (i == (int)ft_strlen(s)) ? 0 : ft_strlen(s) - (size_t)i - (ft_strlen(s) - j); 	
	new_string = ft_strnew(new_size + 1); 
	
	if( !new_string)
	{ 
		return (NULL);
	} 

	while(i <= (int)j)
	{ 
		*(new_string + k++) = *(s + i++); 
	} 		

	return (new_string);

} 
