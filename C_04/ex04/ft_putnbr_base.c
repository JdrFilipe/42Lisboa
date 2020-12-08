/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:11:12 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/07 17:39:34 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		all_ok(char *base)
{
	char	*d;
	int		i;

	d = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*d)
	{
		if (*d == '+' || *d == '-' || *d < 32)
			return (0);
		i = 1;
		while (*(d + i))
		{
			if (*(d + i) == *d)
				return (0);
			i++;
		}
		d++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	char	*c;
	int		i;

	c = str;
	i = 0;
	while (*c != 0)
	{
		i++;
		c++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int len;
	unsigned int nbr1;

	if (all_ok(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr1 = (unsigned int)(-1 * nbr);
		}
		else
			nbr1 = (unsigned int)nbr;
		len = ft_strlen(base);
		if (nbr1 >= len)
		{
			ft_putnbr_base(nbr1 / len, base);
			ft_putnbr_base(nbr1 % len, base);
		}
		else
		{
			write(1, base + nbr1, 1);
		}
	}
}
