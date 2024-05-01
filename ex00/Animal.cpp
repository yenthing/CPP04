#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound: How does it sound?" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

Dog::Dog() : Animal()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
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

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}

Cat::Cat() : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
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
    std::cout << "WrongCat sound" << std::endl;
}
