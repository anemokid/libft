/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrarr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:35:02 by nwidaha           #+#    #+#             */
/*   Updated: 2019/01/28 21:38:24 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrarr(char **strarr)
{
	size_t i;

	if (strarr)
	{
		i = 0;
		while (strarr[i] != NULL)
		{
			ft_putstr(strarr[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
