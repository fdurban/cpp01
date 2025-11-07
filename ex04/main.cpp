/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:01:58 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/07 16:26:01 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	char	*filename;	
	char	*s1;
	char	*s2;
	std::string	readline;

	if(argc != 4)
	{
		std::cout<<"Not the right number of arguments"<<std::endl;
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	std::ifstream file(filename);
	std::cout<<"Valor de argv[2]"<<s1<<std::endl;
	if(file.is_open())
	{
		while(std::getline(filename,readline))
		{
			std::cout<<readline<<std::endl;
		}
	}

}
