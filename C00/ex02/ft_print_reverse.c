/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella <aybella@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:51:24 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/25 17:53:03 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse(void)
{
	char	a;

	a = 'z';
	while (a >= 'a')
	{
		write(1, &a, 1);
		a--;
	}

}
int	main()
{


	ft_print_reverse();

	return (0);
}
