/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:03:45 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/09 21:13:44 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlcat(char *dest, const char *src, size_t l)
{
	size_t	i;

	i = l;
	while (i && *dest)
	{
		dest++;
		i--;
	}
	while (i > 1 && *src)
	{
		*dest++ = *src++;
		i--;
	}
	*dest++ = '\0';
	return (l - i);
}
