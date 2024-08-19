/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-24 13:09:43 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-24 13:09:43 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size);

// int	main(void)
// {
// 	int	*arr;
// 	int	n = 5;

// 	arr = (int *)ft_calloc(n, sizeof(int));
// 	if (arr == NULL)
// 		printf("Memory allocation failed\n");
// 	else
// 		printf("Memory allocation was succesfull\n");
// 	return (0);
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	f_size;
	void	*p;

	if (nmemb == 0 && size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb != 0 && size > 18446744073709551615U / nmemb)
		return (NULL);
	f_size = nmemb * size;
	p = malloc(f_size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, f_size);
	return (p);
}
