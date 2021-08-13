/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:50:51 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/02 11:51:00 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	div_5(t_tools *d)
{
	int	i;

	i = 0;
	if (d->total_nbr > 500)
		i = 10;
	else if (d->total_nbr == 500)
		i = 25;
	else if (d->total_nbr > 200)
		i = 20;
	else if (d->total_nbr >= 100)
		i = 20;
	else if (d->total_nbr > 50)
		i = 5;
	else if (d->total_nbr > 20)
		i = 5;
	else
		i = 1;
	return (i);
}

int	div_3(t_tools *d)
{
	int	i;

	i = 2;
	 if (d->total_nbr > 300)
		i = 20;
	else if (d->total_nbr >= 102)
		i = 34;
	else if (d->total_nbr == 100)
		i = 20;
	else if (d->total_nbr > 30)
		i = 10;
	else
		i = 3;
	return (i);
}

int	div_2(t_tools *d)
{
	int	i;

	i = 2;
	if (d->total_nbr > 200)
		i = 20;
	else if (d->total_nbr >= 100)
		i = 20;
	else
		i = 2;
	return (i);
}
