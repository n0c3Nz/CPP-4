#include "Cat.hpp"

Cat::Cat() : A_Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &copy) : A_Animal() {
	std::cout << "Cat copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Cat &Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this == &copy)
		return *this;

	this->_type = copy._type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " says: Meeow!!" << std::endl;
}
