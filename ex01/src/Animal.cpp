#include <Animal.hpp>

Animal::Animal() : _type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Animal &Animal::operator=(const Animal &copy) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

std::string Animal::getType(void) const {
	return this->_type;
}

void Animal::makeSound(void) const
{
	std::cout << this->getType() << " says: ..." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}
