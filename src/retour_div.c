/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retour_div.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:41:14 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/12 11:01:16 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	retour_div(t_list **a, t_list **b, t_tools *d, int div)
{
	int	i;

	i = 0;
	utils(*b, d);
	sort_list_retour(b, a, d, div);
	while ((*b)->next != NULL)
	{
		while (i < div && (*b)->next != NULL)
		{
			spot_chunck_retour(b, d);
			if (d->count < d->total_nbr / 2)
				top_chunck_retour(a, b, d);
			else if (d->count >= d->total_nbr / 2)
				bottom_chunck_retour(a, b, d);
			ft_init(d);
			utils(*b, d);
			i++;
		}
		sort_list_retour(b, a, d, div);
		i = 0;
	}
	pa(a, b);
	return (0);
}
