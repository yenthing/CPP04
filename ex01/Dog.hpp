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

        std::string getType() const;
        Brain *getBrain() const;
        void makeSound() const;

    private:
        Brain *_Brain;
};
