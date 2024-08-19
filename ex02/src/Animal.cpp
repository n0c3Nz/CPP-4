#include <Animal.hpp>

A_Animal::A_Animal() : _type("A_Animal") {
	std::cout << "A_Animal default constructor called" << std::endl;
}

A_Animal::A_Animal(const A_Animal &copy) {
	std::cout << "A_Animal copy constructor called" << std::endl;
		*this = copy;
}

A_Animal &A_Animal::operator=(const A_Animal &copy) {
	std::cout << "A_Animal assignation operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

std::string A_Animal::getType(void) const {
	return this->_type;
}

void A_Animal::makeSound(void) const
{
	std::cout << this->getType() << " says: ..." << std::endl;
}

A_Animal::~A_Animal() {
	std::cout << "A_Animal destructor called" << std::endl;
}
