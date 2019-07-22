/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 03:14:56 by auguyon           #+#    #+#             */
/*   Updated: 2019/07/19 03:14:57 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toa.h"
#include <stdlib.h>

static int	ft_powk(int x, unsigned int y)
{
	if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return (ft_powk(x, y / 2) * ft_powk(x, y / 2));
	else
		return (x * ft_powk(x, y / 2) * ft_powk(x, y / 2));
}

static char	*ft_output(char **s1, char *s2, int pre)
{
	char	*output;

	if (!(output = (char*)malloc(sizeof(char) * strlen(*s1) + pre + 1)))
		return (NULL);
	output = strcat(*s1, ".\0");
	output = strcat(output, s2);
	free(*s1);
	return (output);
}

char		*ft_ftoa(float fl, int precision)
{
	char	str[precision];
	char	*tmp;
	t_ftoa	s;

	s.i = 0;
	s.int_fl = (int)fl;
	tmp = ft_itoa(s.int_fl);
	s.pui = ft_powk(10, precision);
	s.int_fl = (int)(fl * s.pui);
	s.pui = ft_powk(10, (precision - 1));
	while (s.i < precision)
	{
		s.int_fl_after = (s.int_fl / s.pui);
		s.int_fl_after = s.int_fl_after % 10;
		str[s.i++] = s.int_fl_after + '0';
		s.pui /= 10;
	}
	return (ft_output(&tmp, str, precision));
}
