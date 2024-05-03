#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Constructor Cat called" << std::endl;
    this->type = "Cat";
    this->_Brain = new Brain();
    if (!this->_Brain)
        std::cout << "Memory allocation failed" << std::endl;
}

Cat::~Cat()
{
    delete this->_Brain;
    std::cout << "Destructor Cat called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
        this->type = copy.type;
    this->_Brain = new Brain(*copy._Brain);
    if (!this->_Brain)
        std::cout << "Memory allocation failed" << std::endl;
    return *this;
}

std::string Cat::getType() const
{
    return this->type;
}

void Cat::makeSound() const
{
    std::cout << "Moew Moew!" << std::endl;
}
