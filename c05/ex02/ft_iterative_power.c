/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshin <jshin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:13:12 by jshin             #+#    #+#             */
/*   Updated: 2021/09/23 12:19:16 by jshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	ans;

	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (nb == 1 || power == 0)
		return (1);
	ans = 1;
	while (power)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}
