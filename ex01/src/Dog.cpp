/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:10:09 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/06 17:22:53 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(): Animal()
{
	_type = "Dog";
	std::cout << "Dog Default constructor called"<<std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
	_type = other._type;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;

	if (this == &other)
		_type = other._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called"<<std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog: Wouf wouf!"<<std::endl;
}
