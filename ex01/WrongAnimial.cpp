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
    std::cout << "This is not a correct animal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}
