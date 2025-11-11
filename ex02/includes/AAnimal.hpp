/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:42:18 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/11 02:37:28 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

class AAnimal
{
	protected:
		std::string _type;
		//Constructors in protected for abstract class
		AAnimal();
		AAnimal(const AAnimal& other);
	public:
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal();
		virtual void makeSound() const = 0; //⚠️ minimum 1 pure methode virtuelle, permet la classe asbtraite

		//Getter
		std::string getType() const;
};

#endif