/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:10:09 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/05 00:17:59 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	_type = "Brain";
	std::cout << "Brain Default constructor called"<<std::endl;
}

Brain::Brain(const Brain& other)
{
	_type = other._type;
	std::cout << "Brain Copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;

	if (this == &other)
		_type = other._type;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called"<<std::endl;
}

void Brain::makeSound() const
{
	std::cout << "Unknown cry!"<<std::endl;
}

std::string Brain::getType() const
{
	return(_type);
}
