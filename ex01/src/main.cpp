#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0) {
			std::cout << "- - - - - " << i << " - - - - - -" << std::endl;
			Animal *dog = new Dog();
			std::cout << "- - - - - - - - - - -" << std::endl;
			dog->makeSound();
			std::cout << "- - - - - - - - - - -" << std::endl;
			delete dog;
			std::cout << "- - - - - - - - - - -" << std::endl;
		} else {
			std::cout << "- - - - - " << i << " - - - - - -" << std::endl;
			Animal *cat = new Cat();
			std::cout << "- - - - - - - - - - -" << std::endl;
			cat->makeSound();
			std::cout << "- - - - - - - - - - -" << std::endl;
			delete cat;
			std::cout << "- - - - - - - - - - -" << std::endl;
		}
	}
	return 0;
}