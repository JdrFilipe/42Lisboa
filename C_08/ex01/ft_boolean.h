/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:25:10 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/10 16:25:29 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE	1
# define FALSE	0
# define SUCCESS	0

# define EVEN(x) x % 2 == 0 ? 1 : 0
# define EVEN_MSG "i have an even number of arguments.\n"
# define ODD_MSG "i have an odd number of arguments.\n"

typedef int	t_bool;

#endif
