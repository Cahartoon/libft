/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:30:38 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/10 17:31:14 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dptr;
	const unsigned char	*sptr;

	dptr = dest;
	sptr = src;
	while(n-- && *sptr)
		*dptr++ = *sptr++;
	return (dest);
}
