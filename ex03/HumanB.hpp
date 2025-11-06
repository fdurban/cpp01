/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:21:46 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/06 14:18:04 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon*		weapon;
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void		attack();
		void		setWeapon(Weapon& newWeapon);
};

#endif
