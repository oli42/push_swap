/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunck_retour.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:49:33 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/12 11:39:56 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	spot_chunck_retour(t_list **a, t_tools *d)
{
	t_list	*tmpa;

	tmpa = copy_list(*a);
	if (tmpa->data == d->target)
	{
		d->count = 0;
		return (0);
	}
	while (tmpa->data < d->target)
	{
		rb_(&tmpa);
		d->count += 1;
	}
	return (0);
}

int	top_chunck_retour(t_list **a, t_list **b, t_tools *d)
{
	if ((*b)->data == d->target)
	{
		pa(a, b);
		if ((*a)->next != NULL)
		{
			if ((*a)->data > (*a)->next->data)
				sa(a);
		}
		d->action_nbr += 1;
		return (0);
	}
	while ((*b)->data < d->target)
	{
		rb(b);
		d->action_nbr += 1;
	}
	pa(a, b);
	if ((*a)->next != NULL)
	{
		if ((*a)->data > (*a)->next->data)
			sa(a);
	}
	return (0);
}

void	bottom_chunck_retour(t_list **a, t_list **b, t_tools *d)
{
	while ((*b)->data < d->target)
	{
		rrb(b);
		d->action_nbr += 1;
	}
	pa(a, b);
	if ((*a)->next != NULL)
	{
		if ((*a)->data > (*a)->next->data)
			sa(a);
	}
}
