/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 00:28:11 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/27 00:31:23 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{ 
	int i; 
	char *string; 

	if( !s)
		return NULL; 

	string = ft_strnew(ft_strlen(s));

	if(!string)
		return NULL; 

	i = 0; 

	while(s[i])
	{ 
		string[i] = f(i, s[i]); 
		i++; 
	} 

	string[i] = '\0'; 
	return (string); 

}	
