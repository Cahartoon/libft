/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:12:51 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/10 17:16:01 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src)
{
	unsigned char		*dptr;
	const unsigned char	*sptr;

	dptr = dest;
	sptr = src;
	while (*sptr)
		*dptr++ = *sptr++;
	return (dest);
}
