/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:31:45 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/06 15:37:12 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):
name(name),
weapon(weapon)
{}

HumanA::~HumanA(){};

void	HumanA::attack(){
	std::cout<<name<<" attacks with their "<<weapon.getType()<<std::endl;
}
