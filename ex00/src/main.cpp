/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:36:51 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/13 16:32:54 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

void test_animal()
{
	std::cout << "\n\n### TESTING ANIMAL ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete meta;
	delete j;
	delete i;
}

void test_wrong_animal()
{
	std::cout << "\n\n### TESTING WRONG ANIMAL ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	const WrongAnimal*a = new WrongCat();
	std::cout << a->getType() << " " << std::endl;
	a->makeSound();
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete a;
}

int main()
{
	test_animal();
	test_wrong_animal();
	return (0);
}
