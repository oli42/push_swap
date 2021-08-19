/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:12:21 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/19 21:46:08 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5_norm(t_list **a, t_list **b, int i)
{
	while (i > 0)
	{
		if ((*b)->data < (*a)->data)
			pa(a, b);
		else
		{
			pa(a, b);
			ra(a);
		}
		i--;
	}
}

int	sort_3(t_list **a, t_tools *d)
{	
	if (d->total_nbr == 2)
	{
		if ((*a)->data > (*a)->next->data)
			sa(a);
	}
	else if ((*a)->next->data == d->min && (*a)->next->next->data == d->max)
		sa(a);
	else if ((*a)->data == d->max && (*a)->next->next->data == d->min)
	{
		sa(a);
		rra(a);
	}
	else if ((*a)->data == d->max && (*a)->next->data == d->min)
		ra(a);
	else if ((*a)->data == d->min && (*a)->next->data == d->max)
	{
		sa(a);
		ra(a);
	}
	else if ((*a)->next->data == d->max && (*a)->next->next->data == d->min)
		rra(a);
	return (0);
}

void	sort_5(t_list **a, t_list **b, t_tools *d)
{
	int	i;
	int	j;

	if (d->total_nbr == 4)
		j = 1;
	else
		j = 2;
	i = d->total_nbr - 3;
	while (i > 0)
	{	
		if ((*a)->data == d->max || (*a)->data == d->min)
		{
			pb(a, b);
			i--;
		}
		else
			rra(a);
	}
	utils(*a, d);
	sort_3(a, d);
	sort_5_norm(a, b, j);
}

int	sort_stack(t_list **a, t_list **b, t_tools *d)
{
	int	div;

	div = 0;
	if (d->total_nbr % 5 == 0)
		div = div_5(d);
	else if (d->total_nbr % 3 == 0)
		div = div_3(d);
	else if (d->total_nbr % 2 == 0)
		div = div_2(d);
	else
		div = d->total_nbr;
	aller_div(a, b, d, div);
	retour_div(a, b, d, 2);
	makeup(a, d);
	return (0);
}
