/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:00:45 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/10 14:03:00 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (!ft_strncmp(s1, s2, n))
		return (1);
	else
		return (0);
}
