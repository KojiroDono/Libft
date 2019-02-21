/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 10:40:27 by auguyon           #+#    #+#             */
/*   Updated: 2019/01/21 10:40:36 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa_base(int n, int base)
{
	char	*str;
	int		i;
	int		nb;
	int		neg;

	i = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(neg = 0) && n < 0 && ++i)
		neg = 1;
	neg ? n *= -1 : 1;
	nb = n;
	while ((nb = (nb / base)) > 0)
		i++;
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	neg ? str[0] = '-' : 1;
	while (i > neg)
	{
		nb = (n % base);
		str[--i] = nb > 9 ? nb + 55 : nb + 48;
		n /= base;
	}
	return (str);
}
