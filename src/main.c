/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:48:34 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/19 22:01:46 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_tools	*magic;
	char	**dst;
	const char	*str;

	str = " ";
	if (argc == 1)
		exit (0);
	magic = (t_tools *)malloc(sizeof(magic));
	if (argc > 2)
	{
		str = option(argv);
		dst = ft_split((const char *)str, 32);
		init_stack(dst, magic);
	}
	else if (argc == 2)
	{
		dst = ft_split(argv[1], 32);
		init_stack(dst, magic);
	}
	free(magic);
	return (0);
}
