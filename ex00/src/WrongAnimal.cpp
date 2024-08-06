#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

std::string WrongAnimal::getType(void) const {
	return this->_type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << this->getType() << " says: ..." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}
