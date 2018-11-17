/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:13:55 by auguyon           #+#    #+#             */
/*   Updated: 2018/11/16 15:37:03 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t size)
{
	char	*dst;
	char	*cpy;

	if ((size_t)ft_strlen(str) < size)
		size = (size_t)ft_strlen(str);
	if (!(dst = (char*)malloc(sizeof(*str) * size + 1)))
		return (NULL);
	cpy = dst;
	while (*str && size--)
		*dst++ = *str++;
	*dst = '\0';
	return (cpy);
}
