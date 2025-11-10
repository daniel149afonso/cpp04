/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:36:51 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/09 23:45:54 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	int len = 8;
	Animal *animals[len];
	Brain brain;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	for (int i = 0; i < len; i++)
	{
		if (i < (len / 2))
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (int i = 0; i < len; i++)
		animals[i]->makeSound();
	
	for (int i = 0; i < len; i++)
		delete animals[i];
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	

	return 0;
}
