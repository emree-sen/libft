/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsen <emsen@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:27:10 by emsen             #+#    #+#             */
/*   Updated: 2023/10/21 10:17:07 by emsen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int a)
{
	if ((a >= 'A') && (a <= 'Z'))
		a += 32;
	return (a);
}