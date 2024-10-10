#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << "--------\nWrongCat\n--------" << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* j2 = new WrongCat();

	std::cout << j2->getType() << std::endl;
	std::cout << "Must be WrongCat Sound: ";
	j2->makeSound();
	std::cout << "Must be WrongAnimal Sound: ";
	meta2->makeSound();

	std::cout << "--------\nDelete\n--------" << std::endl;
	delete meta2;
	delete j2;

	return 0;
}