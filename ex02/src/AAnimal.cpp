/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimalmal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:10:09 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/05 00:17:59 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "AAnimal";
	std::cout << "AAnimal Default constructor called"<<std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	_type = other._type;
	std::cout << "AAnimal Copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;

	if (this != &other)
		_type = other._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called"<<std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "Unknown cry!"<<std::endl;
}

std::string AAnimal::getType() const
{
	return(_type);
}
