/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:10:09 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/05 16:09:58 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	_type = "Wrong Cat";
	std::cout << "Wrong Cat Default constructor called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
	_type = other._type;
	std::cout << "Wrong Cat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Wrong Cat Copy assignment operator called" << std::endl;

	if (this == &other)
		_type = other._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat Destructor called"<<std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Cat: Miaou miaou! "<<std::endl;
}
