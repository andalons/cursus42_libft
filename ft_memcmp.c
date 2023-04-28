/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:41:34 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/27 12:07:13 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It compares the first n bytes of 2 pointed memory areas.
 * Bytes are treated as unsigned char so that ‘\200’ is greater than ‘\0’.
 * 
 * @param ptr1 pointer to memory area 1
 * @param ptr2 pointer to memory area 2
 * @param n size_t with the number of bytes to be compared
 * 
 * 		If n times are reached and all bytes are equal, it returns null.
 *  	Otherwise it returns the difference between the first bytes that differ.
 */
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)ptr1)[i] != ((unsigned char *)ptr2)[i])
			return (((unsigned char *)ptr1)[i] - ((unsigned char *)ptr2)[i]);
		i++;
	}
	return (0);
}
