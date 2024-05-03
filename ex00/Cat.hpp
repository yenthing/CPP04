#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);

        std::string getType() const;
        void makeSound() const;
};
