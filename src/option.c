/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:40:46 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/19 21:55:49 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* int	option_norm(t_list	*a, t_list *b, t_tools *magic, int i)
{
	int	x;

	x = 1;
	check_double(a);
	magic->total_nbr = 1;
	utils(a, magic);
	x = check_sort(a);
	if (x == 0)
		exit(0);
	if (i > 1 && i <= 3)
	{
		sort_3(&a, magic);
		exit(0);
	}
	else if (i > 3 && i < 6)
	{
		sort_5(&a, &b, magic);
		exit(0);
	}
	else
		sort_stack(&a, &b, magic);
	return (0);
}

int	option(char **argv, t_tools *magic)
{
	int		i;
	int		x;
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	i = 1;
	while (argv[i])
	{
		x = ft_atoi(argv[i]);
		if (x > 2147483647 || x < -2147483647 - 1)
		{
			ft_putstr_fd("Error\n", 1);
			exit(0);
		}
		ft_lstadd_back(&a, ft_lstnew(x));
		i++;
	}
	i--;
	option_norm(a, b, magic, i);
	return (0);
} */

char	*op(char **argv)
{
	int		i;
	char*	str;

	str = " ";
	i = 1;
	while (argv[i])
	{
		str = ft_strjoin((const char *)str, (const char *)argv[i]);
		i++;
	}
	return (str);
}