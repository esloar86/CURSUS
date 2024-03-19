/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <eslopez-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:02:06 by eslopez-          #+#    #+#             */
/*   Updated: 2024/03/19 19:12:15 by fany             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *d, const void *o, size_t num)
{
	size_t i;

	if (!d && !o)
		return (0);
	i = 0;
	while (i < num)
	{
		((unsigned char *)d)[i] = ((unsigned char *)o)[i];

		i++;
	}
	return (d);
}
/*
int	main(void)
{
	char	prueba1[] = "patata";
	char	prueba2[] = "World";

	printf("%s ->%p\n", prueba1,  ft_memcpy(prueba1, prueba2, 3));

	printf("%s ->%p\n", prueba1,  memcpy(prueba1, prueba2, 3));
}
*/

