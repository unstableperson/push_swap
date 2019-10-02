/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 21:32:54 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/10/02 22:25:50 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_rev_rotate_a(t_ab *ab)
{
	t_stack *tmp;
	t_stack	*prev;

	tmp = ab->a;
	while (tmp->next->next)
		tmp = tmp->next;
	prev = tmp;
	tmp = tmp->next;
	tmp->next = ab->a;
	ab->a = tmp;
	prev->next = NULL;
}

void	ft_rev_rotate_b(t_ab *ab)
{
	t_stack *tmp;
	t_stack	*prev;

	tmp = ab->b;
	while (tmp->next->next)
		tmp = tmp->next;
	prev = tmp;
	tmp = tmp->next;
	tmp->next = ab->b;
	ab->b = tmp;
	prev->next = NULL;
}

void	ft_reverse_rotate(char bf[1000], t_ab *ab)
{
	if (ft_strequ(bf, "rra\n"))
		ft_rev_rotate_a(ab);
	else if (ft_strequ(bf, "rrb\n"))
		ft_rev_rotate_b(ab);
	else
	{
		ft_rev_rotate_a(ab);
		ft_rev_rotate_b(ab);
	}
}
