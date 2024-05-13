#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = copy;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    std::cout << "AMateria assignation operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}
