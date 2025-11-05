/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:10:18 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/05 13:13:11 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main()
{
	int	N;
	Zombie	*horde;

	N = 5;
        horde = zombieHorde(5, "hordeName");
	if(!horde)
	{
		std::cout<<"Malloc error"<<std::endl;
		return (1);
	}
	for(int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
        delete[] horde;
}

