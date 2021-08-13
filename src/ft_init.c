/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:43:03 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/12 10:57:53 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_tools *d)
{
	d->max = 0;
	d->min = 0;
	d->total_nbr = 1;
	d->action_nbr = 0;
	d->count = 0;
}