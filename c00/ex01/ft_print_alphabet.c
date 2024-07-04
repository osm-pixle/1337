/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osm <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:36:08 by osm               #+#    #+#             */
/*   Updated: 2024/06/27 11:41:32 by osm              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void)
{
	char i;
	i = 'a';
	while(i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
