/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:25:03 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/28 15:27:09 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrev(char *s)
{
	char *start;
	char *end; 
	char c; 

	if(s)
	{ 
		start = s; 
		end = s + (ft_strlen(s)-1);
		while(start < end)
		{
			c = *start; 
			*start++ = *end; 
			*end-- = c;
		}	
	} 	
	return(s);
} 
