/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:44:31 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/12 16:03:06 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}
void	Harl::debug(void)
{
	std::cout<<"[DEBUG]"<<std::endl;
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<<std::endl;
}

void	Harl::info(void)
{
	std::cout<<"[INFO]"<<std::endl;
	std::cout<<" cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void	Harl::warning(void)
{
	std::cout<<"[WARNING]"<<std::endl;
	std::cout<<" think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."<<std::endl;
}

void	Harl::error(void)
{
	std::cout<<"[ERROR]"<<std::endl;
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*functionLevels[4])();

	functionLevels[0] = &Harl::debug;
	functionLevels[1] = &Harl::info;
	functionLevels[2] = &Harl::warning;
	functionLevels[3] = &Harl::error;

	for(int i = 0; i < 4; i++)
	{
		if(level == levels[i])
		{
			(this->*functionLevels[i])();
			return ;
		}
	}
	
}
