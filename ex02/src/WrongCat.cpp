#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongA_Animal() {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongA_Animal() {
	std::cout << "WrongCat copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this == &copy)
		return *this;

	this->_type = copy._type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << " says: WrongMeoow!!" << std::endl;
}
