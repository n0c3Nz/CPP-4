#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class A_Animal {
	protected:
		std::string _type;
	public:
		A_Animal();
		A_Animal(const A_Animal &copy);
		A_Animal &operator=(const A_Animal &copy);
		~A_Animal();
		std::string getType(void)const;
		virtual void makeSound() const = 0;
};

#endif