/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:28:11 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/09 22:21:37 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp->next != NULL)
	{
		if ((tmp->data > tmp->next->data))
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int	check_double(t_list *lst)
{
	t_list		*copy;

	while (lst->next != NULL)
	{
		copy = lst;
		copy = copy->next;
		while (copy->next != NULL)
		{
			if (lst->data == copy->data)
			{
				ft_putstr_fd("Error\n", 1);
				exit(EXIT_FAILURE);
			}
			copy = copy->next;
		}	
		if (lst->data == copy->data)
		{
			ft_putstr_fd("Error\n", 1);
			exit(EXIT_FAILURE);
		}
		lst = lst->next;
	}
	return (0);
}

int	checking(t_list **a, t_tools *d, int j)
{
	int		i;
	t_list	**b;

	b = NULL;
	b = (t_list **)malloc(sizeof(b));
	i = 1;
	ft_init(d);
	check_double(*a);
	utils(*a, d);
	i = check_sort(*a);
	if (i == 0)
		exit (0);
	if (j > 1 && j <= 3)
	{
		sort_3(a, d);
		exit (0);
	}
	else if (j > 3 && j < 6)
	{
		sort_5(a, b, d);
		exit (0);
	}
	return (0);
}
