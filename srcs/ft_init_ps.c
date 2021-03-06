/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <bglover@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:57:57 by bglover           #+#    #+#             */
/*   Updated: 2019/11/20 21:24:55 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_init_ps(t_n_list **stack_a, t_ps **new_ps)
{
	(*new_ps)->next = 1;
	(*new_ps)->max = ft_fill_order(stack_a);
	(*new_ps)->flag = 1;
	(*new_ps)->i = 0;
	(*new_ps)->new_win = (t_win *)malloc(sizeof(t_win));
	(*new_ps)->a_b = 0;
}
