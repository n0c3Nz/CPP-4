#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>


class Brain {
	private:
		std::string *ideas;
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		~Brain();
		std::string *getIdeas(void) const;
		/*Para tests*/
};

#endif