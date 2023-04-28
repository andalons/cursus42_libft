/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:58:45 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/19 10:59:19 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It sends character 'c' to the file descriptor specified.
 * 
 * @param c char to write
 * @param fd file descriptor
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
