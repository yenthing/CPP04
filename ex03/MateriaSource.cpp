#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    for (int i = 0; i < 4; i++)
        _materia[i] = src._materia[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
            _materia[i] = rhs._materia[i];
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_materia[i])
            delete _materia[i];
}

void MateriaSource::learnMateria(AMateria *m)
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

AMateria *MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i] && _materia[i]->getType() == type)
            return (_materia[i]->clone());
    }
    return (NULL);
}

void MateriaSource::printInfo() const
{
    std::cout << "There are some materias in the source: ";
    if (this->_materia[0] == NULL)
    {
        std::cout << "Nothing...\n";
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] == NULL)
            continue;
        std::cout << this->_materia[i]->getType() << " ";
    }
    std::cout << std::endl;
}
