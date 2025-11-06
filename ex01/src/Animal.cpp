/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animalmal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:10:09 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/05 00:17:59 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Animal Default constructor called"<<std::endl;
}

Animal::Animal(const Animal& other)
{
	_type = other._type;
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;

	if (this == &other)
		_type = other._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called"<<std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Unknown cry!"<<std::endl;
}

std::string Animal::getType() const
{
	return(_type);
}
