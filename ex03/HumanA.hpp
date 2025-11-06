/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:39:05 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/06 14:25:00 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class Weapon;
class HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;
	public:
		void		attack();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

};
#endif
