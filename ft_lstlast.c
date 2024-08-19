/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-06 12:27:13 by mklimuk           #+#    #+#             */
/*   Updated: 2024-06-06 12:27:13 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstlast(t_list *lst);

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = malloc(sizeof(t_list));
// 	lst->content = "First";
// 	lst->next = malloc(sizeof(t_list));
// 	lst->next->content = "Second";
// 	lst->next->next = malloc(sizeof(t_list));
// 	lst->next->next->content = "Third";
// 	lst->next->next->next = NULL;

// 	printf("Last: %s\n", (char *)lst -> content);
// }

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
