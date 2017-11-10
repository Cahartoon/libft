/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:05:38 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/10 17:05:42 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strim(const char *s)
{
	unsigned int	start;
	unsigned int	end;
	char			*res;

	start = 0;
	end = ft_strlen(s) - 1;
	while ((s[start] == ' ' ||
				s[start] == '\n' ||
				s[start] == '\t')
			&& start != end)
		start++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	if (!(res = ft_strnew(end - start)))
			return (NULL);
	res = ft_strsub(s, start, end - start);
	return (res);
}
