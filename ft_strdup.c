/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:09:30 by auguyon           #+#    #+#             */
/*   Updated: 2018/11/16 15:13:41 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i])
		i++;
	if (!(dest = (char*)malloc(sizeof(*dest) * i + 1)))
		return (0);
	while (*str)
		*dest++ = *str++;
	*dest = '\0';
	return (dest - i);
}
