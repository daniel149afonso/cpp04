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
	int size = 0;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "Thinking about chicken...";
		size++;
	}
	_nbIdeas = size;
	std::cout << "Brain Default constructor called"<<std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Brain Copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = other._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called"<<std::endl;
}

std::string Brain::getIdeas(const int index) const
{
	if (index >= 0 && index < _nbIdeas)
		return(this->_ideas[index]);
	std::cout << "Not a valid index passed"<<std::endl;
	return (NULL);
}

void Brain::setIdeas(int index, const std::string idea)
{
	if (index >= 0 && index < _nbIdeas)
	{
		this->_ideas[index] = idea;
		return ;
	}
	std::cout << "Not a valid index passed"<<std::endl;
}