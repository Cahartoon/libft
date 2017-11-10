/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:53:54 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/09 14:27:18 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	l;

	l = ft_strlen(s);
	if (!(dup = ft_strnew(l)))
		return (NULL);
	while (*s)
		*dup++ = *s++;
	*dup = '\0';
	return (dup - l);
}
