/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshin <jshin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:55:46 by jshin             #+#    #+#             */
/*   Updated: 2021/09/23 12:03:43 by jshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb)
{
	int	ans;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	ans = 1;
	while (nb - 1)
		ans *= nb--;
	return (ans);
}
