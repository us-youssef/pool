/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylhassar <ylhassar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 10:52:15 by ylhassar          #+#    #+#             */
/*   Updated: 2024/06/28 12:13:17 by ylhassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
			c = b + 1;
		while (c <= '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(c);
			if (a != '7')
			{
				write (1, ", ", 2);
			}
			c++;
		}
		b++;
	}
	a++;
}
}
