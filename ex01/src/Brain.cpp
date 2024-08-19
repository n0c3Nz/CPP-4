#include "Brain.hpp"

std::string *Brain::getIdeas(void) const
{
    return this->ideas;
}

Brain::Brain() {
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Idea " + std::to_string(i);
    std::cout << "A brain has been constructed and filled with ideas\n";
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain copy constructor called: A brain has been copied\n";
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &copy) {
    std::cout << "Brain assignation operator called: A brain has been assigned\n";
    if (this == &copy)
        return *this;
    delete[] this->ideas;
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called: Deleting ideas...\n";
    if (this->ideas) {
        delete[] this->ideas;
    }
}