#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        MateriaSource & operator=(MateriaSource const & rhs);
        ~MateriaSource();

        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const & type);
        void printInfo() const;

    private:
        AMateria *_materia[4];
};
