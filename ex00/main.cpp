#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimial.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* WrongAnimal = new WrongCat(); 
    std::cout << "*********************************\n";
    std::cout << j->getType() << " is the type of j" << std::endl;
    std::cout << i->getType() << " is the type of i" << std::endl;
    std::cout << WrongAnimal->getType() << " is the type of " << WrongAnimal->getType() << std::endl;
    std::cout << "*********************************\n";
    i->makeSound(); 
    j->makeSound();
    WrongAnimal->makeSound();
    std::cout << "*********************************\n";
    delete WrongAnimal;
    delete j;
    delete i;
    return 0;
}
