/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:13:07 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 04:57:56 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(std::ifstream &file, std::string name, std::string from, std::string to)
{
	std::ofstream	newfile;
	std::string		text;
	std::size_t		pos;
	std::size_t		i = 0;

	newfile.open(name + ".replace", std::ofstream::trunc);
	std::getline(file, text, '\0');
	pos = text.find(from);
	while (pos != std::string::npos)
	{
		while (i != pos)
			newfile << text[i++];
		newfile << to;
		i += from.size();
		pos = text.find(from, i);
	}
	while (i != text.size())
		newfile << text[i++];
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "This program takes only 3 argumens : " <<'\n';
        std::cout << "1.FILENAME" << '\n' << "2.S1" << '\n' << "3.S2" << '\n';
        return (1);
    }
    std::ifstream ifs(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    if (ifs.good())
    {
        replace(ifs, argv[1], s1, s2);
    }

    return (0);
}