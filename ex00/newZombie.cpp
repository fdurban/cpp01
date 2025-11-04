/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:13:44 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/04 16:47:45 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string n)
{
	this->name = n;
}

Zombie::~Zombie()
{}

Zombie	*newZombie(std::string name)
{
	Zombie* z = new Zombie(name);
	return z;
}
