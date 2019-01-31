/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 20:41:04 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/27 03:14:56 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	char *temp; 

	temp = (char *)s; 
	
	while( *temp != c && *temp) 
	{ 
		temp++; 
	} 

	if( *temp == c) 
	{ 
		return (temp); 
	} 
	return (NULL);
}
