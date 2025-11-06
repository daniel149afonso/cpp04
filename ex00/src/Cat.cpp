/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:10:09 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/06 17:35:53 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(): Animal()
{
	_type = "Cat";
	std::cout << "Cat Default constructor called"<<std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
	_type = other._type;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;

	if (this == &other)
		_type = other._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called"<<std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Miaou miaou!"<<std::endl;
}
