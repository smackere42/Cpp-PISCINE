/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:28:13 by smackere          #+#    #+#             */
/*   Updated: 2022/11/04 02:45:11 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string	_phone_number;
	std::string	_darkest_secret;
public:
	Contact();
	~Contact();

	//SETTERS
	void	set_first_name(std::string	str);
	void	set_last_name(std::string	str);
	void	set_nick_name(std::string	str);
	void	set_phone_number(std::string	str);
	void	set_darkest_secret(std::string	str);


	//GETTERS
	std::string		get_first_name() const;
	std::string		get_last_name() const;
	std::string		get_nick_name() const;
	std::string		get_phone_number() const;
	std::string		get_darkest_secret() const;
};

#endif