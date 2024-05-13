#include "WrongAnimial.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Contructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal Asignation operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Oe Oe : Cuz Im a wrong animal" << std::endl;
}

void WrongAnimal::printInfo() const
{
    std::cout << "It is a " << this->getType() << ": ";
    this->makeSound();
}

std::string WrongAnimal::getType() const
{
    return this->type;
}
