/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsen <emsen@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:58:33 by emsen             #+#    #+#             */
/*   Updated: 2023/12/29 19:48:49 by emsen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}

int main()
{
	int a = 1;
	
	ft_memset(&a, 5, 2);
	ft_memset(&a, 15, 1);
	printf("%d", a);
}

// 00000000 00000000 00000000 00000001
// 00000000 00000000 00000101 00001111
// 00000000 00000000 00000101 00000101