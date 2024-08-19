/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-29 10:25:21 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-29 10:25:21 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <ctype.h>

// void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// void	uppercase(unsigned int index, char *ch)
// {
// 	(void)index;
// 	*ch = toupper(*ch);
// }

// int	main(void)
// {
// 	char	s[] = "hello";

// 	ft_striteri(s, uppercase);
// 	printf ("Result: %s", s);
// 	return (0);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f (i, s + i);
		i++;
	}
}
