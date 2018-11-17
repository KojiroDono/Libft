/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:39:36 by auguyon           #+#    #+#             */
/*   Updated: 2018/11/16 10:50:04 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size <= 0)
		return (0);
	if (!(str = (char*)malloc(sizeof(*str) * size + 1)))
		return (0);
	ft_bzero(str, size + 1);
	return (str);
}
