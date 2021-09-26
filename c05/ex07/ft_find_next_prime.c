/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshin <jshin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:53:57 by jshin             #+#    #+#             */
/*   Updated: 2021/09/23 18:07:43 by jshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int	nb)
{
	while (!ft_prime(nb))
		nb++;
	return (nb);
}
