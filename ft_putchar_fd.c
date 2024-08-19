/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimuk <mklimuk@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-28 14:20:02 by mklimuk           #+#    #+#             */
/*   Updated: 2024-05-28 14:20:02 by mklimuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

// int	main(void)
// {
// 	ft_putchar_fd('c', 1);
// 	return (0);
// }

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
