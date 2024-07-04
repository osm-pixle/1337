/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osm <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:48:46 by osm               #+#    #+#             */
/*   Updated: 2024/06/27 11:56:30 by osm              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_reverse_alphabet(void)
{
	char rev_alpha;
	rev_alpha = 'z';
       while(rev_alpha >= 'a')
       {
	       write(1, &rev_alpha, 1);
	       rev_alpha--;
       
       }
}
int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
