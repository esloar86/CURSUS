/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <eslopez-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:37:02 by eslopez-          #+#    #+#             */
/*   Updated: 2024/03/19 18:05:29 by fany             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <libft.h>

void	*ft_memset(void *ptr, int value, size_t num_len)
{
	size_t i;

	i = 0;
	while (i < num_len)
	{
		((unsigned char *)ptr)[i] = value;
		i++;
	}
	return (ptr);
}
/*
int main() {
    char prueba[10];
    char prueba2[10];
    memset(prueba, 0, sizeof(prueba));
    ft_memset(prueba2, 0, sizeof(prueba2));
    for (int i = 0; i < 10; ++i) {
        printf("%d ", prueba[i]);
	printf("%d \n", prueba2[i]);
    }
    return 0;
}*/
