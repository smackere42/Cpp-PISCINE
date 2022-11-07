/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:57:29 by smackere          #+#    #+#             */
/*   Updated: 2022/11/04 18:49:31 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"

class Phonebook
{
private:
	Contact _arr[8];
	int		_index;
	int		_maxContacts;
	int		_currentConts;
public:

	Phonebook();
	~Phonebook();

	void	showInfo(void);
	void	addCont(void);
	void	searchCont(void);
	std::string	check(std::string name);
	Contact	getContact(int index);
	int		getIndex(void);
};
#endif

// intial contacts with NULLS