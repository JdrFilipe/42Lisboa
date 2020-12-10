/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:27:44 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/08 12:27:46 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	print(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	if (argc == 1)
		return (0);
	if (argc > 2)
	{
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (0 < ft_strcmp(argv[i], argv[j]))
					ft_swap(&argv[i], &argv[j]);
				j++;
			}
			i++;
		}
	}
	print(argc, argv);
	return (0);
}
