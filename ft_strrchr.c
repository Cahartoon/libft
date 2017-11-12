/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 21:20:50 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/11 22:29:00 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	while (*s)
	{
		if (*s == (char)c)
			p = s;
		s++;
	}
	if (!*s && c == 0)
		return ((char *)s);
	else if (*p == (char)c)
		return ((char *)p);
	return (NULL);
}
