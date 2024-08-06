#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		~Animal();
		std::string getType(void)const;
		virtual void makeSound() const;
};

#endif