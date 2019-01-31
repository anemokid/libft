/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 00:22:26 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/29 22:33:03 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{ 
	int i; 
	char *string; 

	string = NULL; 
	if(!string)
		return NULL; 

	string = ft_strnew(ft_strlen(s)); 

	if(!string)
		return NULL; 

	i = 0; 
	while( s[i])
	{ 
		string[i] = f(s[i]);
	   i++; 	
	} 
	string[i] = '\0'; 
	return(string);
} 
