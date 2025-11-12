/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:14:26 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/12 15:34:21 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	if(argc < 2)
	{
		std::cout<<"Wrong number of arguments."<<std::endl;
		std::cout<<"Please follow the format ./harl [DEBUG] [INFO] [WARNING] [ERROR]"<<std::endl;
		return (1);
	}
	for(int i = 1; argv[i]; i++)
	{
		std::string level = argv[i];
		harl.complain(level);
	}
	return (0);
}
