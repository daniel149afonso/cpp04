/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:42:23 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/11 03:14:50 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog& other);
		Dog &operator=(const Dog &other);
		~Dog();

		//Public methods
		void makeSound() const;
		
		//Getters Setters
		std::string getBrainIdeas(const int index) const;
		void setBrainIdeas(int index, const std::string idea);
};
#endif