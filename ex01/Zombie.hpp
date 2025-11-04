/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:09:18 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/04 17:09:42 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Zombie {

        private:
                std::string     name;
        public:
                Zombie();
                Zombie(std::string name);
                ~Zombie();
                void            announce(void);

};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

