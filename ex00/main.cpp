#include "Animal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "*********************************\n";
    std::cout << wrong_meta->getType() << " is the type of wrong_meta" << std::endl;
    std::cout << j->getType() << " is the type of j" << std::endl;
    std::cout << i->getType() << " is the type of i" << std::endl;
    std::cout << "*********************************\n";
    meta->makeSound();
    i->makeSound(); 
    j->makeSound();
    wrong_meta->makeSound();
    std::cout << "*********************************\n";
    delete meta;
    delete wrong_meta;
    delete j;
    delete i;
    return 0;
}
