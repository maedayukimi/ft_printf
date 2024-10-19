/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <maedayukimi@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:12:28 by mawako            #+#    #+#             */
/*   Updated: 2024/10/19 12:02:02 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static int	len(unsigned long int n, int hexa)
{
	int	i;

	i = 0;
	if (!n)
		return (1);
	while (n > 0)
	{
		n /= hexa;
		i++;
	}
	return (i);
}

int	ft_address(unsigned long int n, char c)
{
	char	*large;
	char	*x;
	char	*s;

	large = "0123456789ABCDEF";
	x = "0123456789abcdef";
	if (c == 'x')
		s = x;
	else
		s = large;
	if (n < 16)
		ft_putchar(s[n]);
	else
	{
		ft_address(n / 16, c);
		ft_address(n % 16, c);
	}
	return (len(n, 16) - 1);
}
