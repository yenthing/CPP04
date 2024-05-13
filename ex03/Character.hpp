#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(std::string const & name);
        Character(Character const & src);
        Character & operator=(Character const & rhs);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        void printInfo() const;

    private:
        std::string _name;
        AMateria *_materia[4];
};
