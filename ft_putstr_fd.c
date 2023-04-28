/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:01:13 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/19 10:59:28 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It sends string 's' to the file descriptor specified.
 * 
 * @param s string to write
 * @param fd file descriptor
 */
void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	write(fd, s, len);
}
