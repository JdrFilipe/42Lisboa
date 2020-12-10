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

int	 ft_ultimate_range(int **range, int min, int max)
{
	int ttd[];
	if (min >= max)
	{
		range = 0;
		return (range);
	}
	ttd = malloc(max -min);
	while(min < max)
	{
		*ttd = min;
		ttd++;
		min++;
	}
	range = ttd;
	return (str);
}
