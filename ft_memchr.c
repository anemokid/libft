/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 21:21:28 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/30 15:44:28 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *string;

	string = (unsigned char *)s;
	while (n--)
	{
		if (*string == (unsigned char)c)
		{
			return (string);
		}
		string++;
	}
	return (NULL);
}
