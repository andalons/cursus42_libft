/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:50:29 by aalonso           #+#    #+#             */
/*   Updated: 2023/04/26 15:16:14 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It allocates a block of memory for an array of elements, 
 * each of a specified size. The allocated memory is filled with bytes of value
 * zero.
 * 
 * @param count specifies the number of elements to allocate memory for.
 * @param size specifies the size (in bytes) of each element.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (count * size));
		return (result);
	}
}
