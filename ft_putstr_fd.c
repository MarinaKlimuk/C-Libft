/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-28 14:30:35 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-28 14:30:35 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);

// int	main(void)
// {
// 	ft_putstr_fd("Hello", 1);
// 	return (0);
// }

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}
