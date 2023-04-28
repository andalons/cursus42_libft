/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:24:12 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/26 14:56:52 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It copies a block of memory from a src location to a dst location. 
 * It handles overlapping memory regions correctly, first copying the memory
 * block to a temp buffer, then copying this buffer back to the dst location.
 * 
 * @param dst a pointer to the destination buffer
 * @param src a pointer to the source
 * @param n the number of bytes to copy
 */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dstcpy;
	const unsigned char	*srccpy;

	if (!n || dst == src)
		return (dst);
	dstcpy = (unsigned char *)dst;
	srccpy = (unsigned const char *)src;
	if ((srccpy + n >= dstcpy) && (srccpy <= dstcpy))
	{
		while (n--)
			*(dstcpy + n) = *(srccpy + n);
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
