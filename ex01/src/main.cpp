/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:36:51 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/10 15:32:16 by daniel149af      ###   ########.fr       */
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
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;//should not create a leak
	// delete i;

	// std::cout << "\n\n### TESTING ANIMAL ARRAY ###\n\n" << std::endl;
	// int len = 2;
	// Animal *animals[len];
	// std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// for (int i = 0; i < len; i++)
	// {
	// 	if (i < (len / 2))
	// 		animals[i] = new Cat();
	// 	else
	// 		animals[i] = new Dog();
	// }

	// for (int i = 0; i < len; i++)
	// {
	// 	std::cout << "This is a " << animals[i]->getType() << std::endl;
	// 	animals[i]->makeSound();
	// }

	// std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// for (int i = 0; i < len; i++)
	// 	delete animals[i];

	std::cout << "\n\n### TESTING DEEP COPY ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Cat *cat = new Cat();
	// Dog *dog = new Dog();

	cat->setBrainIdeas(2, "Hello World");
	std::cout << " " << cat->getBrainIdeas(2) << std::endl;

	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete cat;
	return 0;
}
