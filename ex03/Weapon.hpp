/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:22:39 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/05 15:43:40 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string name);
		~Weapon();
		const std::string	&getType();
		void		setType();
};
