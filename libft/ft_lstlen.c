/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <bglover@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 21:31:11 by bglover           #+#    #+#             */
/*   Updated: 2019/11/11 19:28:26 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Подсчет длинны списка
*/

int	ft_lstlen(t_list **lst)
{
	t_list	*temp;
	int		len;

	len = 0;
	temp = *lst;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
