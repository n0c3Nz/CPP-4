#include "Dog.hpp"
#include "Animal.hpp"

Brain *Dog::getBrain( void ) const
{
	return (this->brain);
}

std::string *Dog::getIdeas(void) const
{
	return this->brain->getIdeas();
}

Dog::Dog() : Animal(){
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain();
	this->_type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*copy.brain); // Realizar una copia profunda del objeto Brain
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
	delete brain;
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " says: Woof woof!!" << std::endl;
}
