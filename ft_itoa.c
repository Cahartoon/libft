/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 03:26:59 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/12 04:59:39 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	long	nbr;
	size_t	len;

	nbr = n;
	len = ft_intsize(n);
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	len--;
	if (!ft_ispositive(n))
	{
		nbr = -nbr;
		res[0] = '-';
	}
	if (nbr == 0)
		res[0] = '0';
	while (nbr > 0)
	{
		res[len] = (nbr % 10) + '0';
		len--;
		nbr /= 10;
	}
	return (res);
}
