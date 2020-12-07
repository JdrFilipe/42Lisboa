/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:58:06 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/07 16:58:09 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	unsigned int i;

	i = (unsigned int)nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb *= ft_recursive_power(nb, power--);
	return (nb); 
}

