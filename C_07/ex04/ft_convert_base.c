/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:19:38 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/09 13:19:39 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{

}
