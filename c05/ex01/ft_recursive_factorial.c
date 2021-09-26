/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshin <jshin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:04:48 by jshin             #+#    #+#             */
/*   Updated: 2021/09/23 12:12:34 by jshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int	nb)
{
	int	ans;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	ans = ft_recursive_factorial(nb - 1) * nb;
	return (ans);
}
