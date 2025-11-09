/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:36:51 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/09 02:10:06 by daniel149af      ###   ########.fr       */
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
	int len = 8;
	Animal *animals[len];
	Brain brain;
	std::cout << brain._ideas->size() << "\n";
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

	delete j;//should not create a leak
	delete i;

	return 0;
}
