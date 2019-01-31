/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 00:08:49 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/27 00:18:35 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{ 
	int i; 

	if(s && f) 
	{ 
		i = 0; 
		while(s[i])
		{
		   f(&s[i++]); 	
		}		
	} 
} 