#pragma once

#include "AMateria.hpp"
#include "Character.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        virtual ~Ice();
        Ice(const Ice &copy);
        Ice &operator=(const Ice &copy);

        AMateria *clone() const;
        void use(ICharacter &target);
};
