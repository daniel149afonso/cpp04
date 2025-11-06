/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimalmal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:10:09 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/05 00:17:59 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "Wrong Animal";
	std::cout << "Wrong Animal Default constructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	_type = other._type;
	std::cout << "Wrong Animal Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Wrong Animal Copy assignment operator called" << std::endl;

	if (this == &other)
		_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal Destructor called"<<std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal: Unknown cry!"<<std::endl;
}

std::string WrongAnimal::getType() const
{
	return(_type);
}
