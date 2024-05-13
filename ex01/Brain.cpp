#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "";
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
    return *this;
}

std::string Brain::catchIdea(int i) const
{
    return this->ideas[i];
}

void Brain::createIdea(int i, std::string idea)
{
    this->ideas[i] = idea;
}

void Brain::printIdeas() const
{
    for (int i = 0; i < 100; i++)
        std::cout << this->ideas[i] << std::endl;
}

