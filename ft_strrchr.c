/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:42:57 by auguyon           #+#    #+#             */
/*   Updated: 2018/11/16 17:15:42 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*s;

	s = str;
	if (c == *str)
		return ((char*)str);
	while (*str)
		str++;
	while (s != str)
	{
		if (*str == c)
			return ((char*)str);
		str--;
	}
	return (NULL);
}
