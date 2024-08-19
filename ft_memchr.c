/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-23 13:45:55 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-23 13:45:55 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memchr(const void *s, int c, size_t n);

// int	main(void)
// {
// 	char	s[] = "hellow wwworld";
// 	int	c;
// 	size_t	n;
// 	void *r;

// 	c = 'w';
// 	n = 3;
// 	r = ft_memchr(s,c,n);
// 	printf("Result: %s", (char*)r);
// 	return (0);
// }

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		find;
	size_t				i;

	str = s;
	find = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == find)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (0);
}
