/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-06 12:35:07 by mklimuk           #+#    #+#             */
/*   Updated: 2024-06-06 12:35:07 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstadd_back(t_list **lst, t_list *new);

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;

// 	lst = NULL;
// 	new = ft_lstnew("Hello");
// 	ft_lstadd_back(&lst, new);
// 	printf ("Result1: %s\n", (char *)new -> content);
// 	return (0);
// }

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
