/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:10:09 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/05 00:18:46 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Default constructor called"<<std::endl;
}

Cat::Cat(const Cat& other)
{
	_type = other._type;
	std::cout << "Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &other)
		_type = other._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor called"<<std::endl;
}

void Cat::makeSound() const
{
	
}
