/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:39:04 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/11 21:43:31 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*res;
	size_t	i;

	res = dest;
	i = 0;
	while (src && i < n)
	{
		*dest++ = *src++;
		i++;
	}
	if (i < n)
		ft_bzero(dest, n - i);
	return (res);
}
