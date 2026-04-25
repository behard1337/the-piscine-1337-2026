/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella <aybella@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:37:39 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/25 20:26:30 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char 	b;
	char	c;
	char	d;
	
	a = '0';
	while (a <= '9')
	{	
		b = '0';
		while (b <= '9')
		{
			c = hamza;
			while (c <= '9')
			{
				d = c + 1;
				while (d <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
					if (!(a == '9' && b == '8' && c == '9' && d == '9'))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					d++;
				} 
				c++;
			}
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}







int main()
{

	ft_print_comb2();
	return (0);
}
