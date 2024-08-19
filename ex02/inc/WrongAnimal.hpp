#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongA_Animal {
	protected:
		std::string _type;
	public:
		WrongA_Animal();
		WrongA_Animal(const WrongA_Animal &copy);
		WrongA_Animal &operator=(const WrongA_Animal &copy);
		~WrongA_Animal();
		std::string getType(void)const;
		virtual void makeSound() const;
};

#endif