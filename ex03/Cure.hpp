#pragma once

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        virtual ~Cure();
        Cure(const Cure &copy);
        Cure &operator=(const Cure &copy);

        AMateria *clone() const;
        void use(ICharacter &target);
};
