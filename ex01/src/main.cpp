#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! j->makeSound();
    meta->makeSound();

	std::cout << "--------\nWrongCat\n--------" << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* j2 = new WrongCat();
	std::cout << j2->getType() << " " << std::endl;
	j2->makeSound();

	std::cout << "--------\nDelete\n--------" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete meta2;
	delete j2;
	std::cout << "--------\nBrain tests\n--------" << std::endl;
	Dog perrito = Dog();
	for (int i = 0; i < 5; i++)
		std::cout << perrito.getIdeas()[i] << std::endl;
	std::cout << "Dirección de perrito: " << perrito.getBrain() << std::endl;
	std::cout << "--------\nCopy\n--------" << std::endl;
	Dog perrito2 = perrito;
	for (int i = 0; i < 5; i++)
		std::cout << perrito2.getIdeas()[i] << std::endl;
	std::cout << "Dirección de perrito2: " << perrito2.getBrain() << std::endl;
	std::cout << "--------\nFin\n--------" << std::endl;
	const Animal* P = new Cat();
	delete P;//should not create a leak delete i;
	
	return 0;
}