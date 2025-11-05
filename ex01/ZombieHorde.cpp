/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:47:51 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/05 13:38:28 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name){

	Zombie	*horde;
	int	i;

	horde = new Zombie[N];
	i = 0;
	if(N < 0)
	{
		std::cout<<"Please introduce a valid number of zombies"<<std::endl;
	}
	while(i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}
