#pragma once

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);

        virtual void makeSound() const;
        std::string getType() const;
};

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);

        void makeSound() const;
};

class Cat : public Animal
{
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);

        void makeSound() const;
};

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &copy);

        void makeSound() const;
        std::string getType() const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        virtual ~WrongCat();
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &copy);

        void makeSound() const;
};
