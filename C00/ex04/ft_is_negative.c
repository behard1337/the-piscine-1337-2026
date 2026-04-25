/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella <aybella@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:55:52 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/25 18:02:09 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{	
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else if (n >= 0)
	{
		write(1, "P", 1);
	}
}

int main()
{

	ft_is_negative(2);
	write(1, "\n",1);
	ft_is_negative(-1);
	write(1, "\n",1);
	ft_is_negative(0);
	write(1, "\n",1);



	
	return (0);
}
