/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:01:58 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/11 17:09:36 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int	main(int argc, char **argv)
{
	char		*c_filename;
	char		*outfile;
	std::string	filename;	
	std::string	s1;
	std::string	s2;
	std::string	readline;

	if(argc != 4)
	{
		std::cout<<"Not the right number of arguments"<<std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	if(s1.empty())
	{
		std::cout<<"s1 cannot be empty"<<std::endl;
		return (1);
	}
	s2 = argv[3];
	c_filename = new char[std::strlen(argv[1]) + 1];
	outfile = new char[std::strlen(argv[1]) + 9];
	std::strcpy(c_filename, argv[1]);
	std::strcpy(outfile, c_filename);
	std::strcat(outfile, ".replace");
	std::ifstream file(c_filename);
	if (!file.is_open())
	{
		std::cerr << "Error: input file cannot be opened" << std::endl;
		return 1;
	}
	std::ofstream output(outfile);
	if(!output.is_open())
	{
		std::cout<<"Output file is not open"<<std::endl;
		return (delete[] c_filename, delete[] outfile, file.close(), output.close(), 1);
	}
	while(std::getline(file,readline))
	{
		std::string	stringReplaced;
		size_t	pos = 0;
		while(pos < readline.length())
		{	
			size_t	FoundPos = readline.find(s1, pos);
			if(FoundPos != std::string::npos)
			{
				stringReplaced += readline.substr(pos, FoundPos - pos);
				stringReplaced += s2;
				pos = FoundPos + s1.length();
			}
			else
			{
				stringReplaced += readline.substr(pos);
				break;
			}
		}
		output<<stringReplaced<<std::endl;
	}
	return (delete[] c_filename, delete[] outfile, file.close(), output.close(), 0);
}
