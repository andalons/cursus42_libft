/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:24:45 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/26 14:57:05 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It fills a block of memory with a particular value.
 * 
 * @param ptr pointer to the block of memory
 * @param c integer representing the value to be written
 * @param n size_t representing the bytes of the block
 */
void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
