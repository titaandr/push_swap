/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <bglover@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 20:46:20 by bglover           #+#    #+#             */
/*   Updated: 2019/10/29 20:15:10 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Остаточный вариант
*/

void	ft_for_three_2(n_list **stack_b, c_list **com_stack)
{
	ft_lstcomadd(com_stack, ft_lstcomnew(ft_rrb(stack_b)));
	ft_lstcomadd(com_stack, ft_lstcomnew(ft_sb(stack_b)));
}

/*
** Сортировка трех элементов
*/

void	ft_for_three(n_list **stack_b, c_list **com_stack)
{
	n_list *tmp_2;
	n_list *tmp_3;

	tmp_2 = (*stack_b)->next;
	tmp_3 = tmp_2->next;
	if ((*stack_b)->order > tmp_2->order && (*stack_b)->order < tmp_3->order)
		ft_lstcomadd(com_stack, ft_lstcomnew(ft_rrb(stack_b)));
	else if ((*stack_b)->order < tmp_2->order &&
			(*stack_b)->order > tmp_3->order)
		ft_lstcomadd(com_stack, ft_lstcomnew(ft_sb(stack_b)));
	else if ((*stack_b)->order < tmp_2->order && tmp_2->order > tmp_3->order)
	{
		if (tmp_2->order > tmp_3->order)
			ft_lstcomadd(com_stack, ft_lstcomnew(ft_rb(stack_b)));
	}
	else if ((*stack_b)->order < tmp_2->order && (tmp_2->order < tmp_3->order))
	{
		if (tmp_2->order < tmp_3->order)
		{
			ft_lstcomadd(com_stack, ft_lstcomnew(ft_rb(stack_b)));
			ft_lstcomadd(com_stack, ft_lstcomnew(ft_sb(stack_b)));
		}
	}
	else if ((*stack_b)->order > tmp_2->order && (tmp_2->order < tmp_3->order))
		ft_for_three_2(stack_b, com_stack);
}
