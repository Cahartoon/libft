/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:47:21 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/10 13:53:33 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	i = 0;
	if (!(res = (char*)malloc(sizeof(*res) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, *s);
		i++;
	}
	res[i] = '\0';
	return (res);
}
