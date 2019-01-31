/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:35:34 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/30 19:05:43 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	if ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t'))
		i++;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0') && (str[i] <= '9')))
		{
			return (0);
		}
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
