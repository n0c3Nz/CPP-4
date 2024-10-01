#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongA_Animal {
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		WrongCat &operator=(const WrongCat &copy);
		~WrongCat();
		void makeSound() const;
};

#endif