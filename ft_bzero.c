/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:30:05 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/27 11:58:45 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It fills a block of memory with zeroes.
 * Useful for initializing or clearing out memory blocks.
 * Memset might be a better option (for flexibility and performance reasons).
 * 
 * @param ptr a pointer to the block of memory.
 * @param len a size_t value that specifies the size in bytes of the block.
 * 
 * 		Pointer is cast to ensure pointer arithmetic with byte-size increments.	
 */
void	ft_bzero(void *ptr, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
}
