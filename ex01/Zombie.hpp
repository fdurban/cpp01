/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:09:18 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/05 13:26:04 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Zombie {

        private:
                std::string     name;
        public:
                Zombie();
                ~Zombie();
                void            announce(void);
		void		setName(std::string newName);

};

Zombie	*zombieHorde(int N, std::string name);
