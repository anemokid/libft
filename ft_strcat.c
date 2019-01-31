/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:17:04 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/30 18:12:02 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *str1;

	str1 = s1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*s2 != '\0')
	{
		*str1++ = *s2++;
	}
	*str1 = '\0';
	return (s1);
}