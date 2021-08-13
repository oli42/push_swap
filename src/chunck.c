/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunck.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:47:37 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/12 11:24:44 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	spot_chunck(t_list **a, t_tools *d)
{
	t_list	*tmpa;

	tmpa = copy_list(*a);
	if (tmpa->data == d->target)
	{
		d->count = 0;
		return (0);
	}
	while (tmpa->data > d->target)
	{
		ra_(&tmpa);
		d->count += 1;
	}
	return (0);
}

int	top_chunck(t_list **a, t_list **b, t_tools *d)
{
	if ((*a)->data == d->target)
	{
		pb(a, b);
		d->action_nbr += 1;
		if ((*b)->next != NULL)
		{	
			if ((*b)->data < (*b)->next->data && (*b)->next != NULL)
				sb(b);
		}
		return (0);
	}
	while ((*a)->data > d->target)
	{
		ra(a);
		d->action_nbr += 1;
	}
	pb(a, b);
	if ((*b)->next != NULL)
	{
		if ((*b)->data < (*b)->next->data)
			sb(b);
	}
	d->action_nbr += 1;
	return (0);
}

void	bottom_chunck(t_list **a, t_list **b, t_tools *d)
{
	while ((*a)->data > d->target)
	{
		rra(a);
		d->action_nbr += 1;
	}
	pb(a, b);
	if ((*b)->next != NULL)
	{
		if ((*b)->data < (*b)->next->data)
			sb(b);
	}
	d->action_nbr += 1;
}
