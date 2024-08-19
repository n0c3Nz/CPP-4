#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal {
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		~Dog();
		virtual void makeSound() const;
		std::string *getIdeas(void) const;
		Brain *getBrain( void ) const;
};


#endif