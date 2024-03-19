/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <eslopez-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:36:42 by eslopez-          #+#    #+#             */
/*   Updated: 2024/03/19 18:42:25 by fany             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <libft.h>

void	*ft_bzero(void *ptr, size_t num_len)
{
	ft_memset(ptr, 0, num_len);
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
