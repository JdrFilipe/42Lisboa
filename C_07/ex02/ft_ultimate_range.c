/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:18:48 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/09 13:18:52 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	 ft_ultimate_range(int **range, int min, int max)
{
	int ttd[];
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	ttd = malloc(sizeof(int) *(max -min));
	if (!ttd)
		return (-1);
	while(min < max)
	{
		*ttd = min;
		ttd++;
		min++;
	}
	range = ttd;
	return (max-min);
}
