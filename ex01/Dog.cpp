#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constructor Dog called" << std::endl;
    this->type = "Dog";
    this->_Brain = new Brain();
    if (!this->_Brain)
        std::cout << "Memory allocation failed" << std::endl;
}

Dog::~Dog()
{
    delete this->_Brain;
    std::cout << "Destructor Dog called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

std::string Dog::getType() const
{
    return this->type;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}
