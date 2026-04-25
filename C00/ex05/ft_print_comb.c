/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella <aybella@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:03:43 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/25 18:36:46 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < '8')
	{
		b = a + 1;
		while (b < '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if(!(a == '7' && b == '8' && c == '9'))
				{
				ft_putchar(',');
				ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}
int	main()
{
	ft_print_comb();


	return (0);
}
