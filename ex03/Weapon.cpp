/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:22:17 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/06 15:32:04 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(std::string newType):
type(newType)
{}
Weapon::~Weapon(){}
const std::string	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}
