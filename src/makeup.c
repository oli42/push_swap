/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makeup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:49:51 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/12 11:00:14 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	makeup(t_list **a, t_tools *d)
{
	int	z;
	int	i;

	z = 1;
	i = 0;
	while (i < d->total_nbr && z != 0)
	{
		utils(*a, d);
		if ((*a)->data > (*a)->next->data)
		{
			if ((*a)->data == d->max)
				ra(a);
			else
			{
				sa(a);
				ra(a);
			}
		}
		else
			ra(a);
		i++;
		z = check_sort(*a);
	}
	return (0);
}
