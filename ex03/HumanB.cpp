/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:38:18 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/06 15:36:26 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name):
name(name)
{}

HumanB::~HumanB(){}

void	HumanB::attack(){
	std::cout<<name<<" attacks with their "<<(*weapon).getType()<<std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon){
weapon = &newWeapon;
}
