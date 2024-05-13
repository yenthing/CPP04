#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
    std::cout << "Character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

Character::Character(Character const & src)
{
    std::cout << "Character copy constructor called" << std::endl;
    _name = src._name;
    for (int i = 0; i < 4; i++)
        _materia[i] = src._materia[i];
}

Character & Character::operator=(Character const & rhs)
{
    std::cout << "Character assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        for (int i = 0; i < 4; i++)
            _materia[i] = rhs._materia[i];
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++){
        if (_materia[i])
            delete _materia[i];
    }
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_materia[i])
        {
            _materia[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        _materia[idx] = NULL;
}

void Character::use(int idx, ICharacter & target)
{
    if (idx >= 0 && idx < 4 && _materia[idx])
        _materia[idx]->use(target);
}

void Character::printInfo() const
{
    std::cout << "My name is " << this->getName() << " and I know ";
    if (this->_materia[0] == NULL)
    {
        std::cout << "nothing...\n";
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i])
            std::cout << this->_materia[i]->getType() << " ";
    }
    std::cout << std::endl;
}
