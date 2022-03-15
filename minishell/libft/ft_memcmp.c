/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeapod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 22:49:17 by ppeapod           #+#    #+#             */
/*   Updated: 2021/04/24 22:49:20 by ppeapod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	const unsigned char	*arra;
	const unsigned char	*arrb;

	if (arr1 == arr2 || n == 0)
		return (0);
	arra = (const unsigned char *)arr1;
	arrb = (const unsigned char *)arr2;
	while (n--)
	{
		if (*arra != *arrb)
			return (*arra - *arrb);
		if (n)
		{
			arra++;
			arrb++;
		}
	}
	return (0);
}
