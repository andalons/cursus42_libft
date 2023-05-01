/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:00:25 by aalonso           #+#    #+#             */
/*   Updated: 2023/05/01 08:39:40 by aalonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It generates a string that represents the int that it receives as an
 *  argument. Negative numbers must be managed. 
 * 
 * 		Helper functions:
 * 		ft_intlen: counts number of digits 
 * 		ft_write_digits: it converts digits to string representacion. 
 */
static void	ft_write_digits(char *str, int n, int sign, size_t len)
{
	str[len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) * sign + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 1;
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	int			sign;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		len = ft_intlen(n) + 1;
	}
	else
		len = ft_intlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_write_digits(str, n, sign, len);
	return (str);
}
