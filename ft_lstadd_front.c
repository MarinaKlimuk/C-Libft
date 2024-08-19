/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-05 13:50:24 by mklimuk           #+#    #+#             */
/*   Updated: 2024-06-05 13:50:24 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new);

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;

// 	lst = NULL;
// 	new = ft_lstnew("Hello");
// 	ft_lstadd_front(&lst, new);
// 	printf ("Result1: %s\n", (char *)new -> content);

// 	lst = ft_lstnew("Hello");
// 	new = ft_lstnew("World");
// 	ft_lstadd_front(&lst, new);
// 	printf ("Result2: %s\n", (char *)new -> content);

// 	return (0);
// }

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
}
