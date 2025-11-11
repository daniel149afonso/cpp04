/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:10:09 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/11 03:14:31 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(): AAnimal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat Default constructor called"<<std::endl;
}

Cat::Cat(const Cat& other): AAnimal(other)
{
	_brain = new Brain();
	*this = other;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		_type = other._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
		//std::cout << &_brain << " " << &other._brain << std::endl; // Debug different adresses
	}
	std::cout << "Cat Copy assignment operator called" << std::endl;
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