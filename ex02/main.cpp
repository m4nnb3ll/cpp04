/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:04:49 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/05 21:54:19 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	A_Animal* arr[2];

	arr[0] = new Dog();
	arr[1] = new Cat();
	delete arr[0];
	delete arr[1];
	std::cout << "Pass" << std::endl;
	return 0;
}