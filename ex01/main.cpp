/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 02:32:24 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/17 05:10:57 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    for (int i = 0; i < size; i++)
        animals[i]->makeSound();

    for (int i = 0; i < size; i++)
        delete animals[i];

    Dog original;
    Dog copy(original);  // constructeur de copie
    Dog assigned;
    assigned = original; // opérateur d'affectation

    Cat kitty;
    Cat kittyCopy(kitty);

    return 0;
}
