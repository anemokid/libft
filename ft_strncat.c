/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 14:52:24 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/30 18:17:33 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *string_dest;

	string_dest = s1;
	while (*string_dest != '\0')
		string_dest++;
	while (*s2 != '\0' && (n > 0))
	{
		*string_dest = *s2;
		string_dest++;
		s2++;
		n--;
	}
	*string_dest = '\0';
	return (s1);
}
