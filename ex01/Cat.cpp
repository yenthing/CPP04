#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Constructor called" << std::endl;
    this->type = "Cat";
    this->_Brain = new Brain();
    if (!this->_Brain)
        std::cout << "Memory allocation failed" << std::endl;
}

Cat::~Cat()
{
    delete this->_Brain;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    this->_Brain = new Brain();
    *(this->_Brain) = *(copy._Brain);
    // for (int i; i < 100; i++)
    //     this->_Brain->createIdea(i, copy._Brain->catchIdea(i));
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
        this->type = copy.type;
    this->_Brain = new Brain(*copy._Brain);
    if (!this->_Brain)
        std::cout << "Memory allocation failed in Cat" << std::endl;
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

Brain *Cat::getBrain() const
{
    return this->_Brain;
}
