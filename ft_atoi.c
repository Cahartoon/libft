/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 00:00:20 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/10 00:00:26 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	int		n;
	int		sign;

	n = 0;
	sign = 1;
	while (ft_isspace(*s))
		s++;
	if (ft_isalpha(*s))
	{
		if (*s == '-')
		{
			sign = -1;
			s++;
		}
		else if (*s != '+')
			return (n);
	}
	while (ft_isdigit(*s))
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	return (n * sign);
}
