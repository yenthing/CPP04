#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimial.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *k = new WrongCat();

    std::cout << "==========================\n";
    std::cout << "This is the type of " << j->getType() << std::endl;
    std::cout << "This is the type of " << i->getType() << std::endl;
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    k->makeSound();
    std::cout << "==========================\n";
    delete meta;
    delete i;
    delete j;
    delete k;
    std::cout << "==========================\n";
    return 0;
}
