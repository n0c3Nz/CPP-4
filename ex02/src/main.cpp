#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
	//const A_Animal* meta = new A_Animal();
	//const A_Animal* j = new Dog();
	//const A_Animal* i = new Cat();

	//std::cout << j->getType() << " " << std::endl;
	//std::cout << i->getType() << " " << std::endl;
	//i->makeSound(); //will output the cat sound! j->makeSound();
    //meta->makeSound();
	//A_Animal::makeSound();
	std::cout << "--------\nWrongCat\n--------" << std::endl;
	const WrongA_Animal* meta2 = new WrongA_Animal();
	const WrongA_Animal* j2 = new WrongCat();
	std::cout << j2->getType() << " " << std::endl;
	j2->makeSound();

	std::cout << "--------\nDelete\n--------" << std::endl;
	//delete meta;
	//delete j;
	//delete i;
	delete meta2;
	delete j2;
	std::cout << "--------\nBrain tests\n--------" << std::endl;
	Dog perrito = Dog();
	for (int i = 0; i < 5; i++)
		std::cout << perrito.getIdeas()[i] << std::endl;
	std::cout << "\nDirección de perrito: " << perrito.getBrain() << std::endl;
	std::cout << "--------\nCopy\n--------" << std::endl;
	Dog perrito2(perrito);
	std::cout << "\nDirección de perrito2: " << perrito2.getBrain() << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << perrito2.getIdeas()[i] << std::endl;
	std::cout << "--------\nFin\n--------" << std::endl;
	//const A_Animal* P = new Cat();
	//delete P;//should not create a leak delete P;
	
	return 0;
}