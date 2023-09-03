/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:07:04 by jrosmari          #+#    #+#             */
/*   Updated: 2023/08/15 17:29:24 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end(char *msg)
{
	ft_printf("Error\n%s\n", msg);
}

void	parse_args(int argc, char *argv[])
{
	t_item	*node;

	ft_printf("argv = %s\n", argv[0]);
	if (argc < 2)
		end("No arguments");
	node = (t_item *) malloc(sizeof(t_item));
	node->value = ft_atoi(argv[1]);
	node->next = (t_item *) malloc(sizeof(t_item));
	node->next->value = ft_atoi(argv[2]);
	node->next->next = NULL;
	ft_printf("item = %d\n", node->next->value);
}

int	main(int argc, char *argv[])
{
	ft_printf("### WELCOME TO 42 PUSH SWAP ###\n\n");
	parse_args(argc, argv);
	return (0);
}

// check for errors in args

// load args to lists

// index the lists

// based on the sample size use approp. algorithm
