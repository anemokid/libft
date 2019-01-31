/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 18:34:41 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/27 01:40:30 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strcmp(const char *string1, const char *string2)
{
	int i; 

	i = 0; 
	while( (*string1 != '\0') || (*string2 != '\0') )
	{
		if( *string1 > *string2)
		{
			return 1; 
		} if( *string1 < *string2)
		{
			return -1; 
		} 
		string1++; 
		string2++;  
	} return 0;
} 
