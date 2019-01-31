/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:39:20 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/18 18:26:05 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_strlen.c"
#include "ft_strchr.c"

char *ft_strrchr(const char *string, int c )
{
	size_t s_len; 
   	char ch; 
	char *s_ptr; 

	s_ptr = (char *)string;
	ch = (char)c; 
	s_len = ft_strlen(string); 

	if( s_ptr[s_len] == ch)
	{ 
		return( s_ptr + s_len); 
	} 	
	
	while(s_len != 0) 
	{
		if( s_ptr[s_len] == ch)
		{ 
			return (s_ptr + s_len); 
		} 
		s_len--; 
	}
	return (NULL);
}

//int main(void)
//{
//	char name[] = "niemaaaaaaiaeeeed"; 
//	char ch = 'a'; 
//	char *return_l;
// 	char *return_f;	
//
//	return_l = ft_strrchr(name, ch);	
//	return_f = ft_strchr(name, ch); 
//
//	printf("mem add of last i:%s\n mem add of first i:%s",return_l, return_f);
//	return(0); 
//}
