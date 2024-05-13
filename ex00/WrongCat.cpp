#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructot called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << this->type << "Im still Moew Moew -ing" << std::endl;
}

void WrongCat::printInfo() const
{
    std::cout << "It is a " << this->getType() << ": ";
    this->makeSound();
}
