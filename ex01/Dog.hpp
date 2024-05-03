#pragma once

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);

        void makeSound() const;
        std::string getType() const;

    private:
        Brain *_Brain;
};
