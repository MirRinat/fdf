/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 16:07:07 by bantario          #+#    #+#             */
/*   Updated: 2019/12/22 16:07:21 by bantario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		my_abs(int numb)
{
	if (numb < 0)
		return (numb * (-1));
	if (numb >= 0)
		return (numb);
	return (1);
}

