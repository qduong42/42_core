/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raweber <raweber@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:34:05 by raweber           #+#    #+#             */
/*   Updated: 2022/09/10 10:17:54 by raweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>

int main()
{
	Animal* animalArr[6];
	srand((unsigned int)time(NULL));
	
	for (int i = 0; i < 3; i++)
	{
		std::cout << "\x1B[31m" << "# CREATING dog number " << (i + 1) << "\033[0m" << std::endl;
		animalArr[i] = new Dog();
	}
	for (int i = 3; i < 6; i++)
	{
		std::cout << "\x1B[31m" << "# CREATING dog number " << (i + 1) << "\033[0m" << std::endl;
		animalArr[i] = new Cat();
	}
	
	std::cout << std::endl;
	std::cout << "\x1B[32m" << "EVERYTHING HAS BEEN CREATED!" << "\033[0m" << std::endl;
	std::cout << "Here is a random idea for you: \"" << static_cast<Dog*>(animalArr[0])->getIdea(rand() % 100) << "\"" << std::endl;
	std::cout << "And here another one: \"" << static_cast<Dog*>(animalArr[0])->getIdea(rand() % 100) << "\"" << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 6; i++)
	{
		std::cout << "\x1B[31m" << "# DELETING animal number " << (i + 1) << "\033[0m" << std::endl;
		delete animalArr[i];
	}
	return 0;
}