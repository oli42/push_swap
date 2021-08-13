/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spot_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 12:25:12 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/02 12:25:15 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	spot_smallest(t_list **a, t_tools *d)
{
	t_list	*tmpa;

	tmpa = copy_list(*a);
	while (tmpa->data != d->min)
	{
		ra_(&tmpa);
		d->count += 1;
	}
}
