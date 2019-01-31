/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 03:00:04 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/28 21:18:38 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *str, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		i++;
		if (str[i] != c && str[i] != '\0')
		{
			count++;
		}
		while (str[i] != c && str[i] != '\0')
		{
			i++;
		}
	}
	return (count);
}
