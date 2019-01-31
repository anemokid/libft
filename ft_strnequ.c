/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 01:46:25 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/27 01:48:53 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n) 
{
   if(s1 == NULL || s2 == NULL)
   { 
	   return (0); 
   } 	   

   if(!ft_strncmp(s1, s1, n))
   {
	   return (1); 
   } 
   return (0); 
} 
