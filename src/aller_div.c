/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aller_div.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:19:07 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/12 11:03:28 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	aller_div(t_list **a, t_list **b, t_tools *d, int div)
{
	int	i;

	i = 0;
	sort_list(a, b, d, div);
	utils(*a, d);
	while ((*a)->next != NULL)
	{
		while (i < div && (*a)->next != NULL)
		{
			spot_chunck(a, d);
			if (d->count < d->total_nbr / 2)
				top_chunck(a, b, d);
			else if (d->count >= d->total_nbr / 2)
				bottom_chunck(a, b, d);
			ft_init(d);
			utils(*a, d);
			i++;
		}
		sort_list(a, b, d, div);
		i = 0;
	}
	pb(a, b);
	return (0);
}
