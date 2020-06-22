/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:23:57 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/21 10:28:04 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);
void	ft_is_negative(int n);

int	ft_putchar(char c){
	write(1, &c, 1);
	return(0);
}


void	ft_is_negative(int n){
	if(n >= 0){
		ft_putchar('P');
	}
	else if{
		ft_putchar('N');
	}
}
