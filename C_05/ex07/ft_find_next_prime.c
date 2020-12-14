/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:50:42 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/08 11:50:51 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	unsigned int i;
	unsigned int nn;

	nn = nb;
	i = 2;
	if (nn < 2)
		return (0);
	if (nn == 2)
		return (1);
	while (i * i <= nn)
	{
		if (nn % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int prime;
	int found;

	if (nb <= 1)
		return (2);
	prime = nb;
	found = 0;
	if (ft_is_prime(prime))
		return (prime);
	while (!found)
	{
		prime++;
		if (ft_is_prime(prime))
			found = 1;
	}
	return (prime);
}
