/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:24:00 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/26 14:56:41 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It copies a block of memory from a src location to a dst location.
 * Unlike memmove, it does not check overlapping memory regions.
 * 
 * @param dst a pointer to the destination buffer
 * @param src a pointer to the source
 * @param n the number of bytes to copy
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstcpy;
	const char	*srccpy;
	size_t		i;

	if (!n || dst == src)
		return (dst);
	dstcpy = dst;
	srccpy = src;
	i = 0;
	while (i < n)
	{
		dstcpy[i] = srccpy[i];
		i++;
	}
	return (dst);
}
