/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_valid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:13:13 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/10/03 19:17:34 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		ft_valid(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && av[i][j] != '-')
				return (0);
			j++;
		}
		i++;
	}
	if (i == 1)
		return (0);
	return (1);
}

int		ft_valid_nums(t_ab *ab)
{
	t_stack	*tmp;
	t_stack *check;

	if (ab->a_len <= 1)
		return (1);
	check = ab->a;
	while (check)
	{
		tmp = check->next;
		while (tmp)
		{
			if (check->num == tmp->num)
				return (0);
			tmp = tmp->next;
		}
		check = check->next;
	}
	return (1);
}
