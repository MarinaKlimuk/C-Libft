/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-05 14:54:51 by mklimuk           #+#    #+#             */
/*   Updated: 2024-06-05 14:54:51 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst);

// int	main(void)
// {
// 	t_list	*lst;
// 	int		result;

// 	lst = malloc(sizeof(t_list));
// 	lst->content = "First";
// 	lst->next = malloc(sizeof(t_list));
// 	lst->next->content = "Second";
// 	lst->next->next = malloc(sizeof(t_list));
// 	lst->next->next->content = "Third";
// 	lst->next->next->next = NULL;

// 	result = ft_lstsize(lst);
// 	printf("Result: %d\n", result);

// 	return (0);
// }

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
