/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:34:26 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/10 09:48:13 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_list_norm(t_list **a, t_list **b, t_tools *d, int div)
{
	while (d->total_nbr > 0)
	{
		d->count = d->total_nbr + 1;
		while (d->count-- && (*a)->data != d->min + d->i && d->count > 0)
			ra_(a);
		if ((*a)->data == d->min + d->i)
		{
			pb_(a, b);
			d->total_nbr -= 1;
			d->i++;
		}
		else
			d->i++;
	}
	d->i = 0;
	while (d->i < d->copy)
	{
		if (d->i == d->copy - div)
			d->target = (*b)->data;
		pa_(a, b);
		d->i++;
	}
	d->total_nbr = d->copy;
	return (0);
}

int	sort_list(t_list **a, t_list **b, t_tools *d, int div)
{
	t_list	*tmpa;
	t_list	*tmpb;

	tmpa = copy_list(*a);
	tmpb = copy_list(*b);
	d->i = 1;
	d->copy = d->total_nbr;
	while ((tmpa)->data != d->min)
	{
		ra_(&tmpa);
	}
	pb_(&tmpa, &tmpb);
	d->total_nbr -= 1;
	sort_list_norm(&tmpa, &tmpb, d, div);
	return (0);
}
