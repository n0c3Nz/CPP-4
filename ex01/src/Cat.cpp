#include "Cat.hpp"
#include "Animal.hpp"

Brain *Cat::getBrain( void ) const
{
	return (this->brain);
}

std::string *Cat::getIdeas(void) const
{
	return this->brain->getIdeas();
}

Cat::Cat() : Animal(){
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
	this->_type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*copy.brain); // Realizar una copia profunda del objeto Brain
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
	delete brain;
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " says: Meeow Meeow!!" << std::endl;
}
