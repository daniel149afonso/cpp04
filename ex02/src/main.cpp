/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:36:51 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/13 16:45:10 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

int main()
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	//AAnimal not_allowed; // ❌ erreur : classe abstraite
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	std::cout << dog->getType() << " says: ";
	dog->makeSound();

	std::cout << cat->getType() << " says: ";
	cat->makeSound();
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete dog;
	delete cat;
}
