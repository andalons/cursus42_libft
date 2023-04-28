/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:28:15 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/27 12:56:32 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It locates a byte in a byte string (the first occurrence of c in ptr).
 * 
 * @param ptr pointer to the memory area to be searched
 * @param c the value to be searched for, is treated as an unsigned char
 * @param n maximum number of bytes to search
 */
void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *) p);
		p++;
		n--;
	}
	return (NULL);
}
