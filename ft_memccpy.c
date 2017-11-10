/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:30:17 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/10 17:52:12 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dptr;
	const unsigned char	*sptr;

	dptr = dest;
	sptr = src;
	while (n-- && *sptr != (unsigned char)c)
		*dptr++ = *sptr++;
	return (dest);
}
