/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:48:34 by ochichep          #+#    #+#             */
/*   Updated: 2021/08/13 15:27:15 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_tools	*magic;
	char	**dst;

	if (argc == 1)
		exit (0);
	magic = (t_tools *)malloc(sizeof(magic));
	if (argc > 2)
		option(argv, magic);
	else
	{
		dst = ft_split(argv[1], 32);
		init_stack(dst, magic);
	}
	free(magic);
	return (0);
}
