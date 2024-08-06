#include "Dog.hpp"

#include <Animal.hpp>

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal() {
	std::cout << "Dog copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Dog &Dog::operator=(const Dog &copy) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this == &copy)
		return *this;

	this->_type = copy._type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " says: Woof woof!!" << std::endl;
}
