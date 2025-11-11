/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:42:20 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/11 03:14:55 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat& other);
		Cat &operator=(const Cat &other);
		~Cat();

		//Public methods
		void makeSound() const;

		//Getters Setters
		std::string getBrainIdeas(const int index) const;
		void setBrainIdeas(int index, const std::string idea);
};
#endif