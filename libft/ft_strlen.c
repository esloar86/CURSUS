/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <eslopez-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:36:28 by eslopez-          #+#    #+#             */
/*   Updated: 2024/03/18 18:11:19 by fany             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<string.h> 
#include<stdio.h>
//#include <libft.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str+i) != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char str[] = "patata";
	int result = ft_strlen(str);
	printf("La longitud con strlen es %zu \n", strlen(str));
	printf("La longitud con ft_strlen es %zu \n", result);
}
