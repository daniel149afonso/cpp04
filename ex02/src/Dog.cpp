/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:10:09 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/11 03:14:37 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(): AAnimal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog Default constructor called"<<std::endl;
}

Dog::Dog(const Dog& other): AAnimal(other)
{
	_brain = new Brain();
	*this = other;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		_type = other._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
		//std::cout << &_brain << " " << &other._brain << std::endl; // Debug different adresses
	}
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog Destructor called"<<std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog: Wouf wouf!"<<std::endl;
}

std::string Dog::getBrainIdeas(const int index) const
{
	return (this->_brain->getIdeas(index));
}

void Dog::setBrainIdeas(int index, const std::string idea)
{
	this->_brain->setIdeas(index, idea);
}