/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <eslopez-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:47:36 by eslopez-          #+#    #+#             */
/*   Updated: 2024/03/14 22:19:09 by eslopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<ctype.h>
//#include<stdio.h>
#include <libft.h>

int ft_isprint(int c)
{
	if (!(c >= 32 && c <= 127))
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	for (int i = 0; i < 256; ++i)
	{
		if (ft_isprint(i))
			printf("ft_isprint: %c is printable\n", i);
		else
			printf("no imprimible \n");
		if (isprint(i))
			printf("isprint: %c is printable\n", i);
		else
			printf("no imprimible \n");
	}
}*/
