/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 00:32:05 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/27 01:46:03 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{ 
	if( s1 == NULL || s2 == NULL)
		return (0); 

	if(!ft_strcmp(s1, s2))
	{
		return (1); 
	}
	return (0); 	

}
