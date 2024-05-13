#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <cassert>

int main()
{
    Animal* animal = new Dog();
    delete animal;
    std::cout << "Test with/out virtual destructor passed!" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
        tmp.getBrain()->ideas[0] = "Modified Idea";
        assert(basic.getBrain()->ideas[0] != tmp.getBrain()->ideas[0]);
    }
    std::cout << "---------------------------------" << std::endl;
    Cat initial;
    {
        Cat tmp = initial;
        tmp.getBrain()->ideas[0] = "Modified Idea";
        assert(initial.getBrain()->ideas[0] != tmp.getBrain()->ideas[0]);
    }
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Shallow copy tests passed!" << std::endl;

    std::cout << "---------------------------------" << std::endl;
    
    return 0;
}
