/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:44:03 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/09 21:13:00 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack(char **dst, t_tools *d)
{
	int		i;
	int		x;
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	i = 0;
	if (!dst[i])
		exit(EXIT_FAILURE);
	while (dst[i])
	{
		x = ft_atoi(dst[i]);
		if (x > 2147483647 || x < -2147483647 - 1)
		{
			ft_putstr_fd("Error\n", 1);
			exit(0);
		}
		ft_lstadd_back(&a, ft_lstnew(x));
		i++;
	}
	checking(&a, d, i);
	sort_stack(&a, &b, d);
	return (0);
}
