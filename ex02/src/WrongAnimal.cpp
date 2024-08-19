#include <WrongAnimal.hpp>

WrongA_Animal::WrongA_Animal() : _type("WrongA_Animal") {
	std::cout << "WrongA_Animal default constructor called" << std::endl;
}

WrongA_Animal::WrongA_Animal(const WrongA_Animal &copy) {
	std::cout << "WrongA_Animal copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

WrongA_Animal &WrongA_Animal::operator=(const WrongA_Animal &copy) {
	std::cout << "WrongA_Animal assignation operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

std::string WrongA_Animal::getType(void) const {
	return this->_type;
}

void WrongA_Animal::makeSound(void) const
{
	std::cout << this->getType() << " says: ..." << std::endl;
}

WrongA_Animal::~WrongA_Animal() {
	std::cout << "WrongA_Animal destructor called" << std::endl;
}
