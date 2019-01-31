/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:07:57 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/30 15:31:21 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *destination;
	char *source;

	destination = (char *)dst;
	source = (char *)src;
	while (n > 0 && *source != c)
	{
		*destination = *source;
		destination++;
		source++;
		n--;
	}
	if (n > 0)
	{
		*destination++ = c;
		return ((void *)destination);
	}
	else
		return (NULL);
}
