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

        virtual void makeSound() const;
        virtual std::string getType() const;
        Brain *getBrain() const;

    private:
        Brain *_Brain;
};
