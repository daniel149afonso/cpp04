/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:10:09 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/10 15:22:54 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(): Animal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat Default constructor called"<<std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
	_type = other._type;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;

	if (this != &other)
		_type = other._type;
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Destructor called"<<std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Miaou miaou!"<<std::endl;
}

std::string Cat::getBrainIdeas(const int index) const
{
	return (this->_brain->getIdeas(index));
}

void Cat::setBrainIdeas(int index, const std::string idea)
{
	this->_brain->setIdeas(index, idea);
}