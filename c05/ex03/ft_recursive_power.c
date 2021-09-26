/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshin <jshin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:26:49 by jshin             #+#    #+#             */
/*   Updated: 2021/09/26 22:50:28 by jshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int	nb, int	power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 1 || power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
